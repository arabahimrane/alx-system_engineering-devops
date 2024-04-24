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
    TOTAL_NUMBER_OF_TASKS = len(todos)
    NUMBER_OF_DONE_TASKS = len([todo for todo in todos if todo['completed']])
    EMPLOYEE_NAME = employee['name']

    # Print the progress
    print(f'Employee {EMPLOYEE_NAME} is done with tasks({NUMBER_OF_DONE_TASKS}/{TOTAL_NUMBER_OF_TASKS}):')
    for todo in todos:
        if todo['completed']:
            print(f'\t {todo["title"]}')

if __name__ == "__main__":
    get_employee_todo_list_progress(int(sys.argv[1]))
