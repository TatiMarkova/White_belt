/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 1_8                *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <string>
#include <utility>

/**************
 * Input:     *
 *   25  27   *
 *   12  16   *
 *   13  13   *
 **************/

int main(int argv, char* argc[]) {
    int a, b;
    std::cin >> a >> b;
    
    while (a % b) 
        std::swap(a %= b, b);
    std::cout << b << '\n';

    return EXIT_SUCCESS;
}

/************
 * Output:  *
 *   1      *
 *   4      *
 *   13     *
 ************/
