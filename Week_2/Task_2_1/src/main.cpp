/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 2_1                *
 * "Factorial"              *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <cmath>

/************
 * Input:   *
 *    1     *
 *   -2     *
 *    4     *
 ************/

// Version 1
/*int Factorial(int a) {
    int fact = 1;
    if (a <= 0) return 1;
    else {
        for (int i = 1; i <= a; ++i) {
            fact *= i;
        }
        return fact;
    }
}*/

// Version 2
/*int Factorial(int a) {
    int result = 1;
    for (int i = 2; i <= a; ++i) {
        result *= i;
    }
    return result;
}*/

// Version 3 - recursion
/*int Factorial(int a) {
    if (a <= 1) return 1;
    else { 
        return a * Factorial(a - 1);
    }
}*/

// Version 4 - recursion
int Factorial(int a) {
    return (a <= 1) ? 1 : a * Factorial(a - 1);
}

int main(int argv, char* argc[]) {
    int i;
    std::cin >> i;
    std::cout << Factorial(i) << '\n';

    return EXIT_SUCCESS;
}

/*************
 * Output:   *
 *    1      *
 *    1      *
 *    24     *
 *************/
