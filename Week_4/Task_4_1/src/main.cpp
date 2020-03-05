/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 4_1                *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <string>

using std::string;
using std::cout;

struct Specialization {
    explicit Specialization (const string& s) {
        value = s;
    } 
    string value;  
};

struct Course {   
    explicit Course (const string& c) {
        value = c;
    }
    string value;
};

struct Week {
    explicit Week (const string& w) {
        value = w;
    }
    string value;
};

struct LectureTitle {
    explicit LectureTitle (const Specialization& s, 
                            const Course& c, 
                            const Week& w) {
        specialization = s.value;
        course = c.value;
        week = w.value;
    }
    string specialization;
    string course;
    string week;
};

int main(int argv, char* argc[]) {
    LectureTitle(
        Specialization("C++"),
        Course("White belt"),
        Week("4th")
    );

    //this code shouldn't work
    /*LectureTitle title("C++", "White belt", "4th");

    LectureTitle title(string("C++"), string("White belt"), string("4th"));

    LectureTitle title = {"C++", "White belt", "4th"};

    LectureTitle title = {{"C++"}, {"White belt"}, {"4th"}};

    LectureTitle title(
        Course("White belt"),
        Specialization("C++"),
        Week("4th")
    );

    LectureTitle title(
        Specialization("C++"),
        Week("4th"),
        Course("White belt")
    );*/
        
    return EXIT_SUCCESS;
}
