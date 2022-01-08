/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 1_9                *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

/**************
 * Input:     *
 *   5        *
 *   32       *
 *   1        *
 **************/

int main(int argv, char* argc[]) {
    int n;
    std::cin >> n;
    std::vector<int> nums;
    
    while (n > 0) {
        nums.push_back(n % 2);
        n /= 2;
    }
    std::reverse(nums.begin(), nums.end());
    for (auto i : nums)
        std::cout << i;

    std::cout << '\n';
    return EXIT_SUCCESS;
}

/**************
 * Output:    *
 *   101      *
 *   100000   *
 *   1        *
 **************/
