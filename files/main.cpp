#include "Employees.h"
#include "FileWork.h"
#include <Windows.h>

int main() {
    system("chcp 1251");
    system("cls");

    filecreate();
    int choice;

    do {
		cout << endl;
		cout << "������� ��������." << endl;
		cout << "1. ��������� ����� ��� ����������� �� �����." << endl;
		cout << "2. ��������� ������ ��� ����������� � ����." << endl;
		cout << "3. ��������� ����� ��� ����������� � �����." << endl;
		cout << "4. ����������� ����� ��� ����������� � ����." << endl;
		cout << "5. ����� ����� ��� ����������� � ���� �� id." << endl;
		cout << "6. �����." << endl;

		cin >> choice;

		switch (choice) {
		case 1:
			printEmployeeData();
			break;
		case 2:
			addEmployeeData();
			break;
		case 3:
			deleteEmployeeData();
			break;
		case 4:
			editEmployeeData();
			break;
		case 5:
			searchEmployeeData();
			break;
		case 6:
			cout << "�� ���������!" << endl;
			return 0;
		default:
			cout << "�� ����� ����������� ��������." << endl;
			break;
		}
	} while (choice != 6);
	
    return 0;
}