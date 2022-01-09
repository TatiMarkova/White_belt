/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 2_2                *
 * "Palindrome"             *
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
 *               *
 *   Aa          *
 *****************/

// Version 1
/*bool IsPalindrom(const std::string& str) {
    for (int i = 0, k = str.size() - 1; i < str.size() / 2; ++i, --k) {
        if (str[i] != str[k]) 
            return false;
    }
    return true;
}*/

// Version 2 - no additional variable
bool IsPalindrom(const std::string& str) {
    for (int i = 0; i < str.size() / 2; ++i) {
        if (str[i] != str[str.size()- 1 - i]) 
            return false;
    }
    return true;
}

int main(int argv, char* argc[]) {
    std::string s;
    std::cin >> s;
    std::cout << IsPalindrom(s) << '\n';

    return EXIT_SUCCESS;
}

/************
 * Output:  *
 *   1      *
 *   0      *
 *   1      *
 *   1      *
 *   1      *
 *   0      *
 ************/
