/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 4_4                *
 ****************************/

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>

using std::string;
using std::cout;
/***********************
 * Input:  (file)      *
 *   Keep calm         *
 *   and               *
 *   learn C++         *
 ***********************/

int main(int argv, char* argc[]) {
    //part 1
    /*std::ifstream input("input.txt");
    string line;
    if (input.is_open()) {
        while (getline(input, line)) {
            cout << line << '\n';
        }
    }
    else {  
        cout << "nothing!\n";
    }*/

    //part 2
    std::ifstream input("input.txt");
    string line;
    std::ofstream output("output.txt");
    if (input.is_open()) {
        while (getline(input, line)) {
            output << line << '\n';
        }
    }
    else {  
        cout << "nothing!\n";
    }
    return EXIT_SUCCESS;
}
/***********************
 * Output:             *
 *   Keep calm         *
 *   and               *
 *   learn C++         *
 ***********************/
