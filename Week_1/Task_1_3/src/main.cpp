/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 1_3                *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <cmath>

/****************
 * Input:       *
 *   2  5  2    *
 *   2  4  2    *
 *   2  1  2    *
 *   0  4  10   *
 ****************/

int main(int argv, char* argc[]) {
    double a, b, c;
    double x, y;
    std::cin >> a >> b >> c;

    if (a == 0 && c == 0) {
        std::cout << 0 << '\n';
    } 
    else if (a == 0 && b == 0) {
    } 
    else if (b == 0 && c == 0) {
        std::cout << 0 << '\n';
    } 
    else if (a == 0) {
        std::cout << -c/b << '\n';
    } 
    else if (b == 0) {
        if (-c / a >= 0) {
            std::cout << sqrt(-c / a) << -sqrt(-c / a) << '\n';
        }
    } 
    else {
        double d = ((b * b) - (4 * a * c));
        if (d > 0) {
            x = (-b + sqrt(d)) / (2 * a);
            y = (-b - sqrt(d)) / (2 * a);
            std::cout << x << ' ' << y << '\n';
        } 
        else if (d < 0) {
        }
        else {
            x = (-b + sqrt(d)) / (2 * a);
            std::cout << x << '\n';
        }
    }

    return EXIT_SUCCESS;
}

/****************
 * Output:      *
 *   -0.5  -2   *
 *   -1         *
 *              *
 *   -2.5       *
 ****************/
