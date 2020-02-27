/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 2_16               *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <set>
#include <map>
#include <string>


using std::set;
using std::map;
using std::string;

/******************
 * Input:         *
 *  {1, "odd"},   *
 *  {2, "even"},  *
 *  {3, "odd"},   *
 *  {4, "even"},  *
 *  {5, "odd"}    *
 ******************/

set<string> BuildMapValueSet(const map<int, string>& m) {
    set<string> s;
    for (const auto& i : m) {
        s.insert(i.second);
    }
    return s;

}

int main(int argv, char* argc[]) {
    set<string> values = BuildMapValueSet( {
        {1, "odd"},
        {2, "even"},
        {3, "odd"},
        {4, "even"},
        {5, "odd"}
    });
    for (const string& value : values) {
        std::cout << value << '\n';
    }
    return EXIT_SUCCESS;
}

/*************
 * Output:   *
 *   even    *
 *   odd     *
 *************/
