#include "Console.h"

void Console::menu() {
    int num = 0;
    while (true) {
        clearScreen();
        cout << "Меню: " << endl;
        cout << "\t" << "1) " << "создать сетку," << endl;
        cout << "\t" << "2) " << "информация," << endl;
        cout << "\t" << "3) " << "выход." << endl;
        cout << "Введите номер для перехода: ";

        while (!(cin >> num)) {
            cin.clear();
            cin.get();
            break;
        }

        if (moveToItem(num)) break;
    }
}

bool Console::moveToItem(int num) {
    switch (num) {
        case 1:
            createGrid();
            return false;
        case 2:
            info();
            return false;
        case 3:
            cout << "До встречи." << endl;
            return true;
        default:
            cout << "нет " << num << " пункта!" << endl;
            return false;
    }
}

void Console::createGrid() {

}

void Console::info() {
    manager.printGrid();
}
