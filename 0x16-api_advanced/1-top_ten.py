#!/usr/bin/python3
""" Req reddit api """


def top_ten(subreddit):
    """ Queries the reddit api the top 10"""
    import requests
    url = f"https://www.reddit.com/r/{subreddit}/hot.json?limit=10"
    headers = {'User-Agent': 'My-User-Agent'}

    try:
        response = requests.get(url, headers=headers, allow_redirects=False)
        data = response.json()
        if 'data' in data and 'children' in data['data']:
            for post in data['data']['children']:
                print(post['data']['title'])
        else:
            print('None')
    except Exception as e:
        print("Error:", e)
        print('None')
