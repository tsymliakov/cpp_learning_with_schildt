/*
    Проект X.X

    Мое личное желание написать код, задействующий конструкцию switch-case
*/

#include <iostream>

using namespace std;


int main () {
    int value;

    cout << "Введите целое число: ";
    cin >> value;

    switch (value) {
        case 0:
            cout << "Ноль\n";
            break;
        case 1:
            cout << "Один\n";
            break;
        case 2:
            cout << "Два\n";
            break;
        case 3:
            cout << "Три\n";
            break;
        default:
            cout << "Во дела!\n";
    }
}
