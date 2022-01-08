/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 4_7                *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <fstream>

using std::string;
using std::cout;
using std::cin;
using std::vector;
/**********************************
 * Input:                         *
 *   3                            *
 *   Ivan Ivanov 1 1 1901         *
 *   Petr Petrov 2 2 1902         *
 *   Alexander Sidorov 3 3 1903   *
 *   3                            *
 *   name 1                       *
 *   date 3                       *
 *   mark 5                       *
 **********************************/

struct Student {
    string firstname;
    string lastname;
    int day, month, year;
};  

void TestPrint (const vector<Student>& students) {
    for (const auto& student : students) {
        cout << student.firstname << ' ' << student.lastname
            << ' ' << student.day << '.' << student.month << '.' 
            << student.year << '\n';
    }
}

int main(int argv, char* argc[]) {
    vector<Student> students;
    int query_count;
    int d, m, y;
    cin >> query_count;
    string f_name, l_name;
    for (; query_count > 0; query_count--) {
        cin >> f_name >> l_name >> d >> m >> y;
        students.push_back({f_name, l_name, d, m, y});
    }
    //TestPrint(students);
    cin >> query_count;
    string query;
    int num;
    for (; query_count > 0; query_count--) {
        cin >> query >> num;
        // num--; ??????
        if (query == "name") {
            cout << students[num-1].firstname << ' ' 
                 << students[num-1].lastname << '\n';
        }
        else if (query == "date") {
            cout << students[num-1].day << '.' 
                 << students[num-1].month << '.' 
                 << students[num-1].year << '\n';
        }
        else { 
            cout << "bad request\n";
        }
    } 
    return EXIT_SUCCESS;
}

/*******************
 * Output:         *
 *   Ivan Ivanov   *
 *   3.3.1903      *
 *   bad request   *
 *******************/
