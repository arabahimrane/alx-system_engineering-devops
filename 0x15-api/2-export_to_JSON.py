#!/usr/bin/python3
""" for a given employee ID, returns information about his/her TODO list """

from requests import get
import json
import sys


def get_employee_progress(em_id):
    """ func to get data from api """
    emp_infos = get('https://jsonplaceholder.typicode.com/users/{}/'
                    .format(em_id)).json()
    emp_progress = get('https://jsonplaceholder.typicode.com/users/{}/todos'
                       .format(em_id)).json()
    data = {str(em_id): []}
    for it in emp_progress:
        data[str(em_id)].append({
            "task": it['title'],
            "completed": it['completed'],
            "username": emp_infos['username']
            })

    with open('{}.json'.format(sys.argv[1]), 'w') as f:
        f.write(json.dumps(data))


if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: ./0-gather_data_from_an_API.py <employee_id>")
    else:
        employee_id = int(sys.argv[1])
        get_employee_progress(employee_id)
