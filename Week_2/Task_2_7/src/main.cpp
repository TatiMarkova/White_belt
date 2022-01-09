/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 2_7                *
 * "Reverse vector - 2"     *
 ****************************/

#include <iostream>
#include <vector>

/*******************
 * Input:          *
 *   1 5 3 4 2     *
 *******************/

// Version 1
void Reverse(std::vector<int>& nums) {
    for(size_t i = 0; i < nums.size() / 2; ++i) {
        std::swap(nums[i], nums[nums.size() - i - 1]);
    } 
}

std::vector<int> Reversed(const std::vector<int>& nums) {
    std::vector<int> result = nums;
    Reverse(result);
    return result;
}

// Version 2
/*std::vector<int> Reversed(const std::vector<int>& nums) {
    std::vector<int> result;
    for (int i = nums.size() - 1; i >= 0; --i) {
        result.push_back(nums[i]);
    }
    return result;
}*/

void PrintVect(const std::vector<int>& vi) {
    for (const auto& i : vi) {
        std::cout << i << " ";
    }
}

void Test() {
    std::vector<int> nums = {1, 5, 3, 4, 2};
    std::vector<int> revCopy = Reversed(nums);
    
    PrintVect(revCopy);
    std::cout << '\n';
}

int main(int argv, char* argc[]) {
    //Test();

    return EXIT_SUCCESS;
}

/*******************
 * Output:         *
 *   2 4 3 5 1     *
 *******************/
