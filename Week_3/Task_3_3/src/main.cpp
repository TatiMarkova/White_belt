/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 3_3                *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <algorithm>

using std::string;
using std::vector;
using std::cout;
/**********************
 * Input:             *
 *  first             *
 *  third             *
 *  second            *
 *                    *
 *  second            *
 **********************/

class SortedStrings {
public:
  void AddString(const string& s) {
    strings.push_back(s);
  }
  vector<string> GetSortedStrings() {
    std::sort(begin(strings), end(strings));
    return strings;
  }
private:
    vector<string> strings;
};

void PrintSortedStrings(SortedStrings& strings) {
  for (const string& s : strings.GetSortedStrings()) {
    cout << s << " ";
  }
  cout << '\n';
}

int main(int argv, char* argc[]) {
    SortedStrings strings;

    strings.AddString("first");
    strings.AddString("third");
    strings.AddString("second");
    PrintSortedStrings(strings);

    strings.AddString("second");
    PrintSortedStrings(strings);
    return EXIT_SUCCESS;
}

/*********************************
 * Output:                       *
 *   first second third          *
 *   first second second third   *
 *********************************/
