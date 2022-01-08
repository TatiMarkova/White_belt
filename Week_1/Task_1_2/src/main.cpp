/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 1_2                *
 * "Minimal string"         *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>

/***************************
 * Input:                  *
 *   milk milkshake month  *
 *   c a b                 *
 *   fire fog wood         *
 ***************************/

int main(int argv, char* argc[]) {
    std::string a, b, c;
    std::cin >> a >> b >> c;
    std::cout << std::min(a, std::min(b, c)) << std::endl;

    return EXIT_SUCCESS;
}

/**************
 * Output:    *
 *   milk     *
 *   a        *
 *   fire     *
 **************/
