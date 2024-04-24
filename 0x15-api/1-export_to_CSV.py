import csv
import requests
import sys

def export_employee_todo_list(employee_id):
    # Get the employee's details
    employee = requests.get(f'https://jsonplaceholder.typicode.com/users/{employee_id}').json()
    # Get the employee's TODOs
    todos = requests.get(f'https://jsonplaceholder.typicode.com/users/{employee_id}/todos').json()

    # Prepare data for CSV
    data = []
    for todo in todos:
        data.append([employee_id, employee['username'], todo['completed'], todo['title']])

    # Write data to CSV
    with open(f'{employee_id}.csv', 'w', newline='') as file:
        writer = csv.writer(file, quoting=csv.QUOTE_ALL)
        writer.writerows(data)

if __name__ == "__main__":
    export_employee_todo_list(int(sys.argv[1]))
