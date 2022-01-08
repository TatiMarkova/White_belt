/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 2_13               *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <map>
#include <string>


using std::string;
using std::cin;
using std::cout;
using std::map;
using std::vector;
/************************************************
 * Input:                                       *
 *   
 ************************************************/

int main(int argv, char* argc[]) {
    int q_count;
    cin >> q_count;

    map<string, vector<string>> stops_for_bus;
    for (q_count; q_count > 0; q_count--) {
        string query;
        cin >> query;
        if (query == "ALL_BUSES") {

            continue;
        }
        string arg1;
        cin >> arg1;
        if (query == "BUSES_FOR_STOP") {

        } 
        else if (query == "STOPS_FOR_BUS") {

        }
        else { //query == "NEW_BUS"
            int stop_count;
            cin >> stop_count;
            vector<string> stops;
            for (stop_count; stop_count > 0; stop_count--) {
                string stop_name;
                cin >> stop_name;

            }
        }
    }
    return EXIT_SUCCESS;
}

/********************************************************
 * Output:                                              *

 ********************************************************/
