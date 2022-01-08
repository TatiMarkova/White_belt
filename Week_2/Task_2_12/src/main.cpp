/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 2_12               *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <map>
#include <string>


using std::string;
using std::cin;
using std::cout;
using std::map;
/************************************************
 * Input:                                       *
 *   12 (14 ???)                                *
 *   DUMP                                       *
 *   ABOUT ZZ                                   *
 *   CHANGE_CAPITAL CC C                        *
 *   RENAME CC CCC                              *
 *   CHANGE_CAPITAL CCC C                       *
 *   CHANGE_CAPITAL CCC C1                      *
 *   ABOUT CCC                                  *
 *   CHANGE_CAPITAL BB B                        *
 *   RENAME CC CCC                              *
 *   RENAME BB CCC                              *
 *   RENAME BB BB                               *
 *   DUMP                                       *
 * ? RENAME CCC B                               *
 * ? CHANGE_CAPITAL CCC B                       *
 ************************************************/

int main(int argv, char* argc[]) {
    int q_count;
    cin >> q_count;

    map<string, string> countries;

    for (q_count; q_count > 0; q_count--) {
        string query;
        cin >> query;
        if (query == "DUMP") {
            if (countries.empty()) {
                cout << "There are no countries it the world\n";
            }
            else  {
                for(const auto& item : countries) {
                    cout << item.first << '/' << item.second << ' ';
                }
                cout << '\n';
            }
            continue;
        }
        string country;
        cin >> country;
        if (query == "ABOUT") {
            countries.count(country) ?
                cout << "Country " << country
                << " has capital " << countries[country] << '\n' :
                cout << "Country " << country 
                << " doesn't exist\n";
            continue;
        }
        string second_str;
        cin >> second_str;
        if (query == "CHANGE_CAPITAL") {
            if (!countries.count(country)) { 
                cout << "Introduce new country " << country
                    << " with capital " << second_str << '\n';
            }
            else {
                if (countries[country] == second_str) {
                    cout << "Country " << country 
                        << " hasn't changed its capital\n";
                }
                else {
                    cout << "Country " << country 
                        << " has changed its capital from " 
                        << countries[country] << " to " 
                        << second_str << '\n';
                }
            }
            countries[country] = second_str;
        }
        else { //query == "RENAME"
            auto old_country = countries.find(country);
            auto new_country = countries.find(second_str);
            if (old_country == countries.end() ||
                old_country->first == second_str ||
                new_country != countries.end()) { 
                cout << "Incorrect rename, skip\n";
            }
            else {
                cout << "Country " << old_country->first
                    << " with capital " << old_country->second
                    << " has been renamed to " << second_str << '\n';
                countries[second_str] = old_country->second;
                countries.erase(old_country);
            }
        }
    }
    return EXIT_SUCCESS;
}

/********************************************************
 * Output:                                              *
 *   There are no countries it the world                *
 *   Country ZZ doesn't exist                           *
 *   Introduce new country CC with capital C            *
 *   Country CC with capital C has been renamed to CCC  *
 *   Country CCC hasn't changed its capital             *
 *   Country CC has changed its capital from C to C1    *
 *   Country CC has capital C1                          *
 *   Introduce new country BB with capital B            *
 *   Incorrect rename, skip                             *
 *   Incorrect rename, skip                             *
 *   Incorrect rename, skip                             *
 *   BB/B CCC/C1                                        *
 * ? Incorrect rename, skip                             *
 * ? Country CCC hasn't changed its capital             *
 ********************************************************/
