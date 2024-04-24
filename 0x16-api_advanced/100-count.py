#!/usr/bin/python3
""" playing with queering """


def count_words(subreddit, word_list, after=None, word_counts=None):
    """ wrod counts like aois let's play """
    from collections import Counter
    import requests
    if word_counts is None:
        word_counts = Counter()

    url = f"https://www.reddit.com/r/{subreddit}/hot.json?limit=100"
    headers = {'User-Agent': 'My-User-Agent'}
    params = {'after': after} if after else {}

    try:
        response = requests.get(url, headers=headers, params=params)
        data = response.json()
        if 'data' in data and 'children' in data['data']:
            for post in data['data']['children']:
                title = post['data']['title'].lower()
                word_counts.update(filter(lambda w: w.lower() in
                                          title.split(), word_list))

            if data['data']['after'] is not None:
                return count_words(subreddit,
                                   word_list,
                                   data['data']['after'],
                                   word_counts)
            else:
                sorted_word_counts = sorted(word_counts.items(),
                                            key=lambda x: (-x[1], x[0]))
                for word, count in sorted_word_counts:
                    print(word, count)
        else:
            return
    except Exception as e:
        print("Error:", e)
        return
