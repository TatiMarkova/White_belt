/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 2_9                *
 * "Queue"                  *
 ****************************/

#include <iostream>
#include <vector>
#include <algorithm>

/*******************
 * Input:          *
 *   13            *
 *   COME 6        *
 *   WORRY 0       *
 *   WORRY 4       *
 *   WORRY 5       *
 *   WORRY 5       *
 *   WORRY_COUNT   *
 *   COME -2       *
 *   WORRY_COUNT   *
 *   COME 3        *
 *   QUIET 0       *
 *   WORRY_COUNT   *
 *   QUIET 0       *
 *   WORRY_COUNT   *
 *******************/

int main(int argv, char* argc[]) {
    int Q;
    std::string action;
    std::cin >> Q;
    std::vector<bool> is_quiet;

    for (Q; Q > 0; --Q) {
        std::cin >> action;
        if (action == "WORRY_COUNT") {
            std::cout << count(is_quiet.begin(), is_quiet.end(), false) << std::endl;
        }
        else if (action == "COME") {
            int i;
            std::cin >> i;
                (i >= 0) ? is_quiet.resize(is_quiet.size() + i, true)
                         : is_quiet.resize(is_quiet.size() + i);
        }
        else {
            int i;
            std::cin >> i;
            is_quiet[i] = (action == "QUIET");
        } 
    }

    return EXIT_SUCCESS;
}

/*************
 * Output:   *
 *   3       *
 *   1       *
 *   0       *
 *   0       *
 *************/
