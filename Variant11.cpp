/**************************
 * Автор: Хан.К.С         *
 * Дата: 22.09.26         *
 * Название: Вариант 11   *
 **************************/

#include <cmath>
#include <iostream>

int main() {
    // Declared variables
    double H, a, t;
    double T, h, v;
    const double pi = 3.1415926535;

    // The user enters the values of the variables
    std::cout << "H=";
    std::cin >> H;

    std::cout << "a=";
    std::cin >> a;

    std::cout << "t=";
    std::cin >> t;

    // Converting kilometers to meters
    H = H * 1000;

    // Full descent duration
    T = pi * std::sqrt(H / (2 * a));

    // Descent depth at time t
    h = (H / 2) * (1 - std::cos(std::sqrt(2 * a / H) * t));

    // Descent velocity at time t
    v = std::sqrt(a * H / 2) * std::sin(std::sqrt(2 * a / H) * t);

    // Outputting the answer
    std::cout << "T = " << T << std::endl;
    std::cout << "h = " << h << std::endl;
    std::cout << "v = " << v << std::endl;

    return 0;
}
