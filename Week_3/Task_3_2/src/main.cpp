/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 3_2                *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <cctype>

/***********************
 * Input:              *
 *  5 b A c F d        *
 *  3 a C b            *
 ***********************/

int main(int argv, char* argc[]) {
    int n;
    std::cin >> n;
    std::vector<std::string> str(n);
    for (auto& s : str) {
        std::cin >> s;
    }
    //first version
    /*sort(begin(str), end(str), [](auto l, auto r) {
        for (auto& i : l) i = std::tolower(i);
        for (auto& x : r) x = std::tolower(x);
        return l < r;
    });*/

    //second version
    sort(begin(str), end(str), [](const auto& l, const auto& r) {
        return lexicographical_compare(begin(l), end(l), 
            begin(r), end(r), [] (char cl, char cr) {
                return std::tolower(cl) < std::tolower(cr); 
            });
    });

    for (const auto& i : str) {
        std::cout << i << ' ';
    }
    std::cout << '\n';
    return EXIT_SUCCESS;
}

/****************
 * Output:      *
 *   A b c d F  *
 *   a b C      *
 ****************/
