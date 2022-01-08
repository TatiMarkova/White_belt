/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 2_17               *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <set>
#include <map>
#include <string>

using std::set;
using std::map;
using std::string;

/****************************
 * Input:                   *
 *  8                       *
 *  ADD program code        *
 *  COUNT cipher            *
 *  ADD code cipher         *
 *  COUNT code              *
 *  COUNT program           *
 *  CHECK code program      *
 *  CHECK program cipher    *
 *  CHECK cpp java          *
 ****************************/

int main(int argv, char* argc[]) {
    int q_count;
    std::cin >> q_count;
    map<string, set<string>> vocabulary;
    
    for (q_count; q_count > 0; q_count--) {
        string query;
        std::cin >> query;
        string word1;
        std::cin >> word1;
        if (query == "COUNT") {
            std::cout << vocabulary[word1].size() << '\n';
            continue;
        }
        string word2;
        std::cin >> word2;
        if (query == "ADD") {
            vocabulary[word1].insert(word2);
            vocabulary[word2].insert(word1);
        }
        else { //query == "CHECK"
            vocabulary[word1].count(word2) ?
                    std::cout << "YES\n" :
                    std::cout << "NO\n";
        }
    }
    return EXIT_SUCCESS;
}

/*************
 * Output:   *
 *   0       *
 *   2       *
 *   1       *
 *   YES     *
 *   NO      *
 *   NO      *
 *************/
