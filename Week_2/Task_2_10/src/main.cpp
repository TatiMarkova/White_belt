/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 2_10                *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <algorithm>

using std::string;
using std::vector;
using std::cin;
using std::cout;

/********************************
 * Input:                       *
 *   12                         *
 *   ADD 5 SALARY               *
 *   ADD 31 WALK                *
 *   ADD 30 WALKPREPARATIONS    *
 *   NEXT                       *
 *   DUMP 5                     *
 *   DUMP 28                    *
 *   NEXT                       *
 *   DUMP 31                    *
 *   DUMP 30                    *
 *   DUMP 28                    *
 *   ADD 28 PAYMENT             *
 *   DUMP 28                    *
 ********************************/

int main(int argv, char* argc[]) {
    int q_count;
    cin >> q_count;
    vector<int> days_per_month = 
            {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int temp_month = 1, new_month;
    vector<vector<string>> temp_planner (31);
    
    for (q_count; q_count > 0; q_count--){
        string command = "";
        cin >> command;
        if (command == "NEXT") {
            (temp_month == 12) ? new_month = 1 : new_month = temp_month + 1;

            vector<vector<string>> new_planner;
            if (days_per_month[new_month] < days_per_month[temp_month]) {
                int rest_days = days_per_month[temp_month] - 
                                days_per_month[new_month];
                for(rest_days; rest_days > 0; rest_days--) {
                    //new_planner[new_planner.size()-1].push_back(
                            //temp_planner[temp_planner.size() - rest_days]);
                }
            }
            else {
                new_planner.insert(end(new_planner), 
                    begin(temp_planner), end(temp_planner));
            }
            temp_planner = new_planner;
        }
        int day;
        cin >> day;
        if (command ==  "DUMP") {
            cout << day << ' ';
            for (const auto& act : temp_planner[day]) {
                cout << act << ' ';
            }
            cout << '\n';
        }
        else { //ADD
            string act;
            cin >> act;
            temp_planner[day].push_back(act);
        }
    }
        

    return EXIT_SUCCESS;
}

/****************************************
 * Output:                              *
 *   1   SALARY                         *
 *   2   WALKPREPARATIONS WALK          *
 *   0                                  *
 *   0                                  *
 *   2   WALKPREPARATIONS WALK          *
 *   3   WALKPREPARATIONS WALK PAYMENT  *
 ****************************************/
