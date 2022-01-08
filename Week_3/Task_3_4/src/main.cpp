/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 3_4                *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using std::string;
using std::vector;
using std::cout;
using std::map;
/**********************
 * Input:   (main)    *
 **********************/

string Find_name (const map<int, string>& names, const int& year) {
    string name;
    for (const auto& year_name : names) {
        if (year_name.first <= year) {
            name = year_name.second;
        }
        else {
          break;
        }
    }
    return name;
}

class Person {
public:
    void ChangeFirstName(int year, const string& first_name) {
        first_names[year] = first_name;
    }
    void ChangeLastName(int year, const string& last_name) {
        last_names[year] = last_name;
    }
    string GetFullName(int year) {
        string first_name = Find_name(first_names, year);
        string last_name = Find_name(last_names, year);

        if (first_name.empty() && last_name.empty()) return "Incognito";
        else if (first_name.empty()) {
            return last_name + " with unknown first name";
        }
        else if (last_name.empty()) {
            return first_name + " with unknown last name";
        }
        else {
            return first_name + ' ' + last_name;
        } 
    }
private:
    map<int, string> first_names;
    map<int, string> last_names;
};

int main(int argv, char* argc[]) {
    Person person;

    person.ChangeFirstName(1965, "Polina");
    person.ChangeLastName(1967, "Sergeeva");
    for (int year : {1900, 1965, 1990}) {
        cout << person.GetFullName(year) << '\n';
    }

    person.ChangeFirstName(1970, "Appolinaria");
    for (int year : {1969, 1970}) {
        cout << person.GetFullName(year) << '\n';
    }

    person.ChangeLastName(1968, "Volkova");
    for (int year : {1969, 1970}) {
        cout << person.GetFullName(year) << '\n';
    }

    person.ChangeLastName(1960, "Pupsikova");
    for (int year : {1900, 1965, 1990}) {
        cout << person.GetFullName(year) << '\n';
    }
    return EXIT_SUCCESS;
}

/**************************************
 * Output:                            *  
 *   Incognito                        *
 *   Polina with unknown last name    *
 *   Polina Sergeeva                  *
 *   Polina Sergeeva                  *
 *   Appolinaria Sergeeva             *
 *   Polina Volkova                   *
 *   Appolinaria Volkova              *
 *   Incognito                        * 
 *   Polina Pupsikova                 *
 *   Appolinaria Volkova              *
 **************************************/
