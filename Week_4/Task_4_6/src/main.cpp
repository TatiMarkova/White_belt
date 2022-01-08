/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 4_6                *
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
 *   2 3                *
 *   1,2,3              *
 *   4,5,6              *
 ************************/

int main(int argv, char* argc[]) {
    std::ifstream input("input.txt");
    int n = 0, m = 0;
    if (input) {
        input >> n;
        input >> m;
        for (; n > 0; n--) {
            for (int mm = m; mm > 0; mm--) {
                int num = 0;
                input >> num;
                input.ignore(1);
                cout << std::setw(10) << num;
            }
            if (n != 1) {  cout << '\n'; }
        }
    }
    else {
        cout << "nothing!\n";
    }

    return EXIT_SUCCESS;
}
/************************************
 * Output:                          *
 *         1         2         3    *
 *         4         5         6    *
 ************************************/
