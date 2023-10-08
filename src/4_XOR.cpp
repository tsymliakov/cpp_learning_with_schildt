/*
    Проект 2.2

    Реализация оператора "исключающее ИЛИ" (XOR) в виде функции на основе
    встроенных логических C++ операторов.
*/

#include <iostream>
#include <cmath>

using namespace std;


bool XOR(bool p, bool q) {
    return (p || q) && !(p && q);
}
