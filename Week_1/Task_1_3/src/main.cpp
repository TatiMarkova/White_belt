/*********************************
 * Coursera                      *
 * White belt                    *
 * @autor: Tatiana Markova       *
 * task: 1_3                     *
 * "Quadratic/linear equation"   *
 *********************************/

#include <iostream>
#include <cstdlib>
#include <cmath>

/*******************
 * Input:          *
 * 1)   2  5  2    *
 * 2)   2  4  2    *
 * 3)   2  1  2    *
 * 4)   0  4  10   *
 * 5)   0  2  3    *
 * 6)   0  0  3    *
 * 7)   2  3  7    *
 * 8)   4  4  4    *
 * 9)  -3 -5 -7    *
 * 10) -2  4 -2    *
 * 11) -3  5 -4    *
 * 12) -3 -5  4    *
 * 13) -2 -4  2    *
 * 14) -2  4  2    *
 * 15)  2 -4  2    *
 * 16)  2  4 -2    *
 * 17) -1  0  1    *
 * 18)  2  0  0    *
 * 19)  0  2  0    *
 * 20)  4  0  2    *
 * 21)  4  3  0    *
 * 22) 1.44 0 -1   *
 *******************/

int main(int argv, char* argc[]) {
    double a, b, c;
    std::cin >> a >> b >> c;

    if ((a == 0 || b == 0) && c == 0) {
        std::cout << 0 << std::endl;
    } 
    else if (a == 0 && b == 0) { 
        // no solutions
    } 
    else if (a == 0) {
        std::cout << -c/b << std::endl;
    } 
    else if (b == 0) {
        if (-c / a >= 0) {
            std::cout << -sqrt(-c / a) << ' ' 
                      << sqrt(-c / a) << std::endl;
        }
    } 
    else {
        double D = ((b * b) - (4 * a * c));
        if (D > 0) {
             std::cout << (-b + sqrt(D)) / (2 * a) << ' ' 
                       << (-b - sqrt(D)) / (2 * a) << std::endl;
        } 
        else if (D < 0) { 
            // no solutions
        }
        else {
            std::cout << -b / (2 * a) << std::endl;
        }
    }

    return EXIT_SUCCESS;
}

/*****************************
 * Output:                   *
 * 1)   -0.5      -2         *
 * 2)   -1                   *
 * 3)                        *
 * 4)   -2.5                 *
 * 5)   -1.5                 *
 * 6)                        *
 * 7)                        *
 * 8)                        *
 * 9)                        *
 * 10)   1                   *
 * 11)                       *
 * 12)  -2.25733   0.590667  *
 * 13)  -2.41421   0.414214  *
 * 14)  -0.414214  2.41421   *
 * 15)   1                   *
 * 16)  -0.414214 -2.41421   *
 * 17)  -1         1         *
 * 18)  -0                   *
 * 19)  -0                   *
 * 20)                       *
 * 21)   0        -0.75      *
 * 22)   0.833333 -0.833333  *
 *****************************/
