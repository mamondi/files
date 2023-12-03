#include "FileWork.h"

void filecreate() {
    ofstream file("employee.txt");
    file.open("employee.txt");
    file.close();
}

void printEmployeeData() {
    ifstream file;
    file.open("employee.txt");
    Employee employee;
    while (file >> employee.id >> employee.firstname >> employee.lastname >> employee.salary) {
        cout << employee.id << " " << employee.firstname << " " << employee.lastname << " " << employee.salary << endl;
    }
    file.close();
}

void addEmployeeData() {
    Employee employee;
    cout << "Enter employee id: ";
    cin >> employee.id;
    cout << "Enter employee firstname: ";
    cin >> employee.firstname;
    cout << "Enter employee lastname: ";
    cin >> employee.lastname;
    cout << "Enter employee salary: ";
    cin >> employee.salary;
    cout << "Added!" << endl;

    ofstream file("employee.txt", ios::app);
    file << employee.id << " " << employee.firstname << " " << employee.lastname << " " << employee.salary << endl;
    file.close();
}

void deleteEmployeeData() {
    int id;
    cout << "Enter employee id: ";
    cin >> id;

    ifstream file;
    file.open("employee.txt");
    Employee employee;

    ofstream tempfile("temp.txt");
    while (file >> employee.id >> employee.firstname >> employee.lastname >> employee.salary) {
        if (employee.id != id) {
            tempfile << employee.id << " " << employee.firstname << " " << employee.lastname << " " << employee.salary << endl;
        }
    }
    file.close();
    tempfile.close();

    remove("employee.txt");
    rename("temp.txt", "employee.txt");
}

void editEmployeeData() {
    int id;
    cout << "Enter employee id: ";
    cin >> id;

    ifstream file;
    file.open("employee.txt");
    Employee employee;

    ofstream tempfile("temp.txt");
    while (file >> employee.id >> employee.firstname >> employee.lastname >> employee.salary) {
        if (employee.id == id) {
            cout << "Enter employee id: ";
            cin >> employee.id;
            cout << "Enter employee firstname: ";
            cin >> employee.firstname;
            cout << "Enter employee lastname: ";
            cin >> employee.lastname;
            cout << "Enter employee salary: ";
            cin >> employee.salary;
        }
        tempfile << employee.id << " " << employee.firstname << " " << employee.lastname << " " << employee.salary << endl;
    }
    file.close();
    tempfile.close();

    remove("employee.txt");
    rename("temp.txt", "employee.txt");
}

void searchEmployeeData() {
    int id;
    cout << "Enter employee id: ";
    cin >> id;

    ifstream file;
    file.open("employee.txt");
    Employee employee;

    while (file >> employee.id >> employee.firstname >> employee.lastname >> employee.salary) {
        if (employee.id == id) {
            cout << employee.id << " " << employee.firstname << " " << employee.lastname << " " << employee.salary << endl;
        }
    }
    file.close();
}