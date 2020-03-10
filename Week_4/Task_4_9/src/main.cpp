/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 4_9                *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

void EnsureEqual(const string& left, const string& right) {
    if (left != right) {
        throw runtime_error(left + " != " + right);
    }
}

int main(int argv, char* argc[]) {
    try {
        EnsureEqual("C++ White", "C++ White");
        EnsureEqual("C++ White", "C++ Yellow");
    } 
    catch (runtime_error& e) {
        cout << e.what() << endl;
    }
    return EXIT_SUCCESS;
}
