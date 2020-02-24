/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 2_2                *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <string>

/*****************
 * Input:        *
 *   madam       *
 *   gentleman   *
 *   X           *
 *   AA          *
 *****************/

bool IsPalindrom(const std::string& str) {
    for (int i = 0, k = str.size() - 1; i < str.size() / 2; i++, k--)
        if (str[i] != str[k]) return false;
    return true;
}

bool IsPalindrom2(const std::string& str) {
    for (int i = 0; i < str.size() / 2; i++)
        if (str[i] != str[str.size()- 1 - i]) return false;
    return true;
}


int main(int argv, char* argc[]) {
    std::string s;
    std::cin >> s;
    std::cout << IsPalindrom2(s) << '\n';

    return EXIT_SUCCESS;
}

/************
 * Output:  *
 *   true   *
 *   false  *
 *   true   *
 *   true   *
 ************/
