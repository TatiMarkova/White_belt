/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 3_6                *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>

using std::string;
using std::cout;
/**********************
 * Input:  (main)     *
 **********************/

class ReversibleString {
public:
    ReversibleString() {}
    ReversibleString(const string& s) {
        str = s;
    }
    void Reverse() {
        /*for (int i = 0; i < str.size() / 2; i++) {
            std::swap (str[i], str[str.size() - 1 - i]);
        }*/
        reverse(begin(str), end(str));
    }
    string ToString() const {
        return str;
    }

private:
    string str;
};

int main(int argv, char* argc[]) {
    ReversibleString s("live");
    s.Reverse();
    cout << s.ToString() << '\n';

    s.Reverse();
    const ReversibleString& s_ref = s;
    string tmp = s_ref.ToString();
    cout << tmp << '\n';

    ReversibleString empty;
    cout << '"' << empty.ToString() << '"' << '\n';
        
    return EXIT_SUCCESS;
}

/*********************************
 * Output:                       *
 *   evil                        *
 *   live                        *
 *   ""                          *
 *********************************/
