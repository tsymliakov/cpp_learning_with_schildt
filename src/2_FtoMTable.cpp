/*
    Проект 1.2

    При выполнении этой программы выводится таблица результатов преобразования
    футов в метры.
*/

#include <iostream>

#define feets_in_meter 3.28

using namespace std;


int main() {
    double f, m;

    for (f = 1.0; f <= 100; f++) {
        m = f / feets_in_meter;
        cout << f << " футов равно " << m << " метра.\n";

        if ((int)f % 10 == 0 ) {
            cout << "\n";
        }
    }

    return 0;
}
