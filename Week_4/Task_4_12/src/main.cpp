/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 4_12               *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

string AskTimeServer() {
    //throw runtime_error("fail");
    //throw system_error(error_code());
    return "16:35:41";
}

class TimeServer {
public:
    string GetCurrentTime() {
        try {
            last_fetched_time = AskTimeServer();
            return last_fetched_time;
        }
        catch (system_error& e) {
            return last_fetched_time;
        }
        catch (...) {
            throw;
        }
    }
private:
    string last_fetched_time = "00:00:00";
};

int main(int argv, char* argc[]) {
    TimeServer ts;
    try {
        cout << ts.GetCurrentTime() << endl;
    } catch (exception& e) {
        cout << "Exception got: " << e.what() << endl;
    }
    return EXIT_SUCCESS;
}
