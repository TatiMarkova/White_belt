/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 2_1                *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <cmath>

/************
 * Input:   *
 *   1      *
 *   -2     *
 *   4      *
 ************/

int Factorial(int a) {
    int fact = 1;
    if (a <= 0) return 1;
    else {
        for (int i = 1; i <= a; ++i) {
            fact *= i;
        }
        return fact;
    }
}

int main(int argv, char* argc[]) {
    int i;
    std::cin >> i;
    std::cout << Factorial(i) << '\n';

    return EXIT_SUCCESS;
}

/*************
 * Output:   *
 *   1       *
 *   1       *
 *   24      *
 *************/
