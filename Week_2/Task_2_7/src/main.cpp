/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 2_7                *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <vector>

/********************
 * Input:           *
 *   a = 1 5 3 4 2  *
 ********************/

std::vector<int> Reversed(const std::vector<int>& nums) {
    std::vector<int> res;
    for (int i = nums.size() - 1; i >= 0; i --) {
        res.push_back(nums[i]);
    }
    return res;
}

void Test() {
    std::vector<int> nums = {1, 5, 3, 4, 2};
    std::vector<int> revCopy = Reversed(nums);
    
    for(const auto& i : revCopy) 
        std::cout << i << ' ';
    std::cout << '\n';
}

int main(int argv, char* argc[]) {
    Test();

    return EXIT_SUCCESS;
}

/********************
 * Output:          *
 *   a = 2 4 3 5 1  *
 ********************/
