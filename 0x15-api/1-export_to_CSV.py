#!/usr/bin/python3
""" for a given employee ID, returns information about his/her TODO list """

import csv
from requests import get
import sys


def get_employee_progress(em_id):
    """ func to get data from api """
    emp_infos = get('https://jsonplaceholder.typicode.com/users/{}/'
                    .format(em_id)).json()
    emp_progress = get('https://jsonplaceholder.typicode.com/users/{}/todos'
                       .format(em_id)).json()

    with open('{}.csv'.format(sys.argv[1]), 'w', newline='') as f:
        data = csv.writer(f, quoting=csv.QUOTE_ALL)
        for it in emp_progress:
            data.writerow([
                it['userId'],
                emp_infos['username'],
                str(it['completed']),
                it['title']
                ])


if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: ./0-gather_data_from_an_API.py <employee_id>")
    else:
        employee_id = int(sys.argv[1])
        get_employee_progress(employee_id)
