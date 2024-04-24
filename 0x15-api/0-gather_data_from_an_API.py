#!/usr/bin/python3
""" for a given employee ID, returns information about his/her TODO list """

from requests import get
import sys


def get_employee_progress(em_id):
    """ func to get data from api """
    emp_infos = get('https://jsonplaceholder.typicode.com/users/{}/'
                    .format(em_id)).json()
    emp_progress = get('https://jsonplaceholder.typicode.com/users/{}/todos'
                       .format(em_id)).json()
    done_tasks = [task['title'] for task in emp_progress if task['completed']]

    print('Employee {} is done with tasks({}/{}):'
          .format(emp_infos['name'], len(done_tasks), len(emp_progress)))
    for task in done_tasks:
        print(f"\t {task}")


if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: ./0-gather_data_from_an_API.py <employee_id>")
    else:
        employee_id = int(sys.argv[1])
        get_employee_progress(employee_id)
