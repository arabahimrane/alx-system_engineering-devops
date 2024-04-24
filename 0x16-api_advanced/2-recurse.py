#!/usr/bin/python3
""" Req reddit api and returnrning all hot posts recuure already apears"""
import requests


def recurse(subreddit, hot_list=None, after=None):
    """
    Queries the Reddit API recursively to fetch all hot articles from a subred.
    Returns a list containing the titles of all hot articles.
    If no results are found for the given subreddit, returns None.
    """
    if hot_list is None:
        hot_list = []

    url = f"https://www.reddit.com/r/{subreddit}/hot.json"
    params = {'limit': 100, 'after': after}
    headers = {'User-Agent': 'My-User-Agent'}

    try:
        response = requests.get(url, headers=headers, params=params,
                                allow_redirects=False)
        response.raise_for_status()
        data = response.json().get('data', {})
        children = data.get('children', [])

        for post in children:
            hot_list.append(post['data']['title'])

        after = data.get('after')
        if after:
            return recurse(subreddit, hot_list, after)
        else:
            return hot_list if hot_list else None
    except requests.RequestException as e:
        print("Error:", e)
        return None
