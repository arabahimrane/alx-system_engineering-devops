#!/usr/bin/python3
""" for a given employee ID, returns information about his/her TODO list """

from requests import get
import json


def get_employee_progress():
    """ func to get data from api """
    emp_infos = get('https://jsonplaceholder.typicode.com/users/').json()
    emp_prog = get('https://jsonplaceholder.typicode.com/todos').json()
    all_data = {}
    for user in emp_infos:
        data = []
        for it in emp_prog:
            if it['userId'] == user['id']:
                data.append({
                    "username": user['username'],
                    "task": it['title'],
                    "completed": it['completed']
                    })
        all_data[user['id']] = data
    with open('todo_all_employees.json', 'w') as f:
        json.dump(data, f)


if __name__ == "__main__":
    get_employee_progress()
