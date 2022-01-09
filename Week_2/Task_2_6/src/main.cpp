/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 2_6                *
 * "Reverse vector"         *
 ****************************/

#include <iostream>
#include <vector>

/********************
 * Input:           *
 *   1 5 3 4 2      *
 ********************/

// Version 1
void Reverse(std::vector<int>& nums) {
    for(int i = 0; i < nums.size() / 2; i++) {
        int temp = nums[i];
        nums[i] = nums[nums.size() - 1 - i];
        nums[nums.size() - 1 - i] = temp;
    } 
}

// Version 2
/*void Reverse(std::vector<int>& nums) {
    for(size_t i = 0; i < nums.size() / 2; i++) {
        std::swap(nums[i], nums[nums.size() - i - 1]);
    } 
}*/

void PrintVect(const std::vector<int>& vi) {
    for (const auto& i : vi) {
        std::cout << i << " ";
    }
}

void Test() {
    std::vector<int> nums = {1, 5, 3, 4, 2};
    Reverse(nums);
    
    PrintVect(nums);
    std::cout << '\n';
}

int main(int argv, char* argc[]) {
    //Test();

    return EXIT_SUCCESS;
}

/********************
 * Output:          *
 *    2 4 3 5 1     *
 ********************/
