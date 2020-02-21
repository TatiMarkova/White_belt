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
 *   coffffee *
 **************/

int main(int argv, char* argc[]) {
    std::string str;
    std::cin >> str;
    
    int num = 0;
    for(int i = 0; i < str.size(); i++) {
        if (str[i] == 'f') num++;
        if (num == 2) {
            std::cout << i << '\n';
            break;
        }
    } 
    if (num == 0) std::cout << -2 << '\n';
    else if (num == 1) std::cout << -1 << '\n';

    return EXIT_SUCCESS;
}

/************
 * Output:  *
 *   -1     *
 *   3      *
 *   -2     *
 *   3      *
 ************/
