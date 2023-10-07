/*
    Проект 2.1

    Программа, вычисляющая время, за которое свет проходит расстояние между
    Землей и Марсом.
*/

#include <iostream>

#define lightspeed_miles 186000.0 // миль в секунду
#define earth_mars_distance_miles 34000000.0 // миль

using namespace std;


int main() {
    double delay_sec = earth_mars_distance_miles / lightspeed_miles;

    cout << delay_sec << "\n";

    return 0;
}
