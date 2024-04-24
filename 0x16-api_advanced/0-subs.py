#!/usr/bin/python3
"""
Queries the Reddit API for the number of subscribers to a given subreddit.
Returns the number of subscribers if the subreddit exists, otherwise ret 0.
"""
import requests


def number_of_subscribers(subreddit):
    """
    Queries the Reddit API for the number of subscribers to a given subreddit.
    Returns the number of subscribers if the subreddit exists, otherwise ret 0.
    """
    url = f"https://www.reddit.com/r/{subreddit}/about.json"
    headers = {'User-Agent': 'python:myredditapp:v1.0.0 (by /u/zakaria_H/)'}
    try:
        response = requests.get(url, headers=headers, allow_redirects=False)
        if response.status_code == 200:
            data = response.json()
            return data['data']['subscribers']
        else:
            return 0
    except requests.RequestException as e:
        print("Error:", e)
        return 0
