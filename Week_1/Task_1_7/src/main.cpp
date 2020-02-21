/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 1_7                *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>

/**************
 * Input:     *
 *   comfort  *
 *   coffee   *
 *   car      *
 **************/

int main(int argv, char* argc[]) {
    std::string str;
    std::cin >> str;
    int num = count(str.begin(), str.end(), 'f');

    if (num > 1) {
        std::cout << str.find_last_of('f') << '\n';
    }
    else if (num == 1) {
        std::cout << -1 << '\n';
    }
    else (num == 0) {
        std::cout << -2 << '\n';
    }

    return EXIT_SUCCESS;
}

/************
 * Output:  *
 *   -1     *
 *   3      *
 *   -2     *
 ************/
