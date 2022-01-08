/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 1_6                *
 ****************************/

#include <iostream>
#include <cstdlib>

/********************************
 * Input:(A >= 1 && B <= 30000) *
 *   1  10                      *
 *   2  3                       *
 *   9  11                      *
 ********************************/

int main(int argv, char* argc[]) {
    int a, b;
    std::cin >> a >> b;
    
    for(a; a <= b; a++) {
        if (a % 2 == 0)
            std::cout << a << ' ';
    }
    
    return EXIT_SUCCESS;
}

/*********************
 * Output:           *
 *   2  4  6  8  10  *
 *   2               *
 *   10              *
 *********************/
