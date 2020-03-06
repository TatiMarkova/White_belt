/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 4_5                *
 ****************************/

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using std::string;
using std::cout;
/************************
 * Input:  (file)       *
 *   5                  *
 *   0.34567            *
 *   10.4               *
 *   3.33353            *
 *   3.333              *
 *   3.3                *
 ************************/

int main(int argv, char* argc[]) {
    std::ifstream input("input.txt");
    string line;
    if (input) {
        while (getline(input, line)) {
            double num = stod(line);
            cout << std::fixed << std::setprecision(3);
            cout << num << '\n';
        }
    }
    else {
        cout << "nothing!\n";
    }

    return EXIT_SUCCESS;
}
/***********************
 * Output:             *
 *   5.000             *
 *   0.346             *
 *   10.400            *
 *   3.334             *
 *   3.333             *
 *   3.300             *
 ***********************/
