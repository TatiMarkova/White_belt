/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 1_4                *
 ****************************/

#include <iostream>
#include <cstdlib>

/************
 * Input:   *
 *   10  2  *
 *   3   5  *
 *   11  0  *
 ************/

int main(int argv, char* argc[]) {
    int a, b;
    std::cin >> a >> b;
    if (b == 0) 
        std::cout << "Impossible\n";
    else 
        std::cout << a / b << '\n';

    return EXIT_SUCCESS;
}

/******************
 * Output:        *
 *   5            *
 *   0            *
 *   Impossible   *
 ******************/
