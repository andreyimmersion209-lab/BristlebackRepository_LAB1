/********************************
 * Автор:    Хан Кирилл         *
 * Задание:  Линейные алгоритмы *
 * Вариант:  11                 *
 ********************************/

#include <cmath>
#include <iostream>

using namespace std;

int main() {
    const double pi = 3.1415926535;
    double H, a, t;
    double T, h, v;

    cout << "H (km) = ";
    cin >> H;

    cout << "a (m/s^2) = ";
    cin >> a;

    cout << "t (s) = ";
    cin >> t;

    H = H * 1000.0;

    T = pi * sqrt(H / (2.0 * a));

    h = (H / 2.0) * (1.0 - cos(sqrt(2.0 * a / H) * t));

    v = sqrt(a * H / 2.0) * sin(sqrt(2.0 * a / H) * t);

    cout << "T = " << T << endl
         << "h = " << h << endl
         << "v = " << v << endl;

    return 0;
}
