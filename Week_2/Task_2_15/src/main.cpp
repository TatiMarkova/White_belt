/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 2_15               *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <set>
#include <string>

/************
 * Input:   *
 *   6      *
 *   f      *
 *   s      *
 *   f      *
 *   t      *
 *   s      *
 *   s      *
 ************/

int main(int argv, char* argc[]) {
    int i;
    std::cin >> i;
    std::set<std::string> s;
    for (i; i > 0; i--) {
        std::string str;
        std::cin >> str;
        s.insert(str);
    }
    std::cout << s.size() << '\n';
    

    return EXIT_SUCCESS;
}

/*************
 * Output:   *
 *   3       *
 *************/
