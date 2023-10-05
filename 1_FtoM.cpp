 /*
    Проект 1.1

    Эта программа преобразует футы в метры.
 */

 #include <iostream>

#define feets_in_meter 3.28

using namespace std;


int main() {
    double f, m;

    cout << "Введите длину в футах: ";
    cin >> f;

    m = f / feets_in_meter;

    cout << f << " футов равно " << m << " метрам.\n";

    return 0;
}
