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
		cout << "Виберіть операцію." << endl;
		cout << "1. Виведення даних про співробітників на екран." << endl;
		cout << "2. Додавання данних про співробітників у файл." << endl;
		cout << "3. Видалення даних про співробітників з файлу." << endl;
		cout << "4. Редагування даних про співробітників у файлі." << endl;
		cout << "5. Пошук даних про співробітників у файлі за id." << endl;
		cout << "6. Вихід." << endl;

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
			cout << "До побачення!" << endl;
			return 0;
		default:
			cout << "Ви ввели неправильне значення." << endl;
			break;
		}
	} while (choice != 6);
	
    return 0;
}