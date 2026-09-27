/*********************************
 * Автор: Хан Кирилл             *                     
 * Название: Спуск клети в шахте *
 * Вариант 11                    *
 *********************************/

#include <cmath>
#include <iostream>

using namespace std;

int main() {
    // Declared variables
    const double pi = 3.1415926535;
    double H, a, t;
    double T, h, v;

    // Input data
    cout << "H=";
    cin >> H;

    cout << "a=";
    cin >> a;

    cout << "t=";
    cin >> t;

    // Converting kilometers to meters
    H = H * 1000.0;

    // Full descent duration (formula 1)
    T = pi * sqrt(H / (2.0 * a));

    // Descent depth at time t (formula 2)
    h = (H / 2.0) * (1.0 - cos(sqrt(2.0 * a / H) * t));

    // Descent velocity at time t (formula 3)
    v = sqrt(a * H / 2.0) * sin(sqrt(2.0 * a / H) * t);

    // Outputting the answer
    cout << "T = " << T << endl
         << "h = " << h << endl
         << "v = " << v << endl;

    return 0;
}
