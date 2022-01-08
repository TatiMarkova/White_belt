/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 3_1                *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <cmath>

/****************************
 * Input:                   *
 *  2 -4 3                  *
 *  3 1 -3 2                *
 ****************************/

int main(int argv, char* argc[]) {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (auto& i : nums) {
        std::cin >> i;
    }
    sort(begin(nums), end(nums), [](const auto& l, const auto& r) {
        return std::abs(l) < std::abs(r);
    });
    for (const auto& i : nums) {
        std::cout << i << ' ';
    }
    std::cout << '\n';
    return EXIT_SUCCESS;
}

/*************
 * Output:   *
 *   3 -4    *
 *   1 2 -3  *
 *************/
