/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 2_9                *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
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
    int queue_size;
    std::cin >> queue_size;
    std::vector<bool> is_quiet; 
    for (queue_size; queue_size > 0; --queue_size) {
        std::string action = "";
        std::cin >> action;
        if (action == "WORRY_COUNT") {
            std::cout << count(is_quiet.begin(), is_quiet.end(), false) << '\n';
            continue;
        }
        int index;
        std::cin >> index;
        if (action == "COME") {
            (index > 0) ?
                is_quiet.resize(is_quiet.size() + index, true) : 
                is_quiet.resize(is_quiet.size() + index); 
        }
        else {
            (action == "WORRY") ? 
                is_quiet[index] = false : is_quiet[index] = true;
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
