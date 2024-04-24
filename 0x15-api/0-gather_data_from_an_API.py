#!/usr/bin/python3
""" for a given employee ID, returns information about his/her TODO list """

import requests
import sys

def get_employee_todo_list_progress(employee_id):
    # Get the employee's details
    employee = requests.get(f'https://jsonplaceholder.typicode.com/users/{employee_id}').json()
    # Get the employee's TODOs
    todos = requests.get(f'https://jsonplaceholder.typicode.com/users/{employee_id}/todos').json()

    # Calculate the progress
    total_tasks = len(todos)
    done_tasks = len([todo for todo in todos if todo['completed']])
    employee_name = employee['name']

    # Print the progress
    print(f'Employee {employee_name} is done with tasks({done_tasks}/{total_tasks}):')
    for todo in todos:
        if todo['completed']:
            print(f'\t {todo["title"]}')

if __name__ == "__main__":
    get_employee_todo_list_progress(int(sys.argv[1]))
