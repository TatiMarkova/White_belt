/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 2_11                *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <map>
#include <string>
#include <algorithm>

/**********************
 * Input:             *
 *   3                *
 *   eat  tea         *
 *   find  search     *
 *   master  stream   *
 *   abab  bbaa       *
 *   aaba  aabb       *
 *   aaba  aab        *
 **********************/

std::map<char, int> BuildCharCounters (const std::string& str) {
    std::map<char, int> result;
    for (const auto& ch : str) {
        ++result[ch];
    }
    return result;
}

int main(int argv, char* argc[]) {
    int index;
    std::cin >> index;
    std::string left, right;
    for (index; index > 0; index--) {
        std::cin >> left >> right;
        (BuildCharCounters(left) == BuildCharCounters(right)) ? 
                std::cout << "YES\n" : std::cout << "NO\n"; 
    }   
    return EXIT_SUCCESS;
}

/*************
 * Output:   *
 *   YES     *
 *   NO      *
 *   YES     *
 *   YES     *
 *   NO      *
 *   NO      *
 *************/
