/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 2_6                *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <vector>

/********************
 * Input:           *
 *   a = 1 5 3 4 2  *
 ********************/

void Reverse(std::vector<int>& nums) {
    for(int i = 0; i < nums.size() / 2; i++) {
        int temp = nums[i];
        nums[i] = nums[nums.size() - 1 - i];
        nums[nums.size() - 1 - i] = temp;
    } 
}

void Test() {
    std::vector<int> nums = {1, 5, 3, 4, 2};
    Reverse(nums);
    
    for(const auto& i : nums) 
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
