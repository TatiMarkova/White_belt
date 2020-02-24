/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 2_3                *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

/**************************
 * Input:                 *
 *   abacaba, aba, 5      *
 *   abacaba, aba, 2      *
 *   weew, bro, code, 4   *
 **************************/

bool IsPalindrom(const std::string& str) {
    for (int i = 0; i < str.size() / 2; i++)
        if (str[i] != str[str.size()- 1 - i]) return false;
    return true;
}

std::vector<std::string> PalindromFilter(const std::vector<std::string>& words, 
                                    const int& minLength) {
    std::vector<std::string> upd;
    for(const auto& str : words) {
        if (IsPalindrom(str) && str.size() >= minLength) 
            upd.push_back(str);
    }
    return upd;
}

void Test() {
    std::vector<std::string> s1 = PalindromFilter({"abacaba", "aba"}, 5);
    std::vector<std::string> s2 = PalindromFilter({"abacaba", "aba"}, 2);
    std::vector<std::string> s3 = PalindromFilter({"weew", "bro", "code"}, 4);

    for (const auto& s : s1) std::cout << s << " ";
    std::cout << '\n';
    for (const auto& s : s2) std::cout << s << " ";
    std::cout << '\n';    
    for (const auto& s : s3) std::cout << s << " ";
    std::cout << '\n';
}

int main(int argv, char* argc[]) {
    Test();
    return EXIT_SUCCESS;
}

/********************
 * Output:          *
 *   abacaba        *
 *   abacaba, aba   *
 *   weew           *
 ********************/
