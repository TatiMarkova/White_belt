/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 1_9                *
 * "Binary Numbers"         *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <string>

/**************
 * Input:     *
 *   5        *
 *   32       *
 *   1        *
 **************/

// Version 1
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

    return EXIT_SUCCESS;
}

// Version 2
/*std::string toBinary(int n)
{
    std::string r;
    while(n != 0) 
    {   
        r = (n % 2 == 0 ? "0" : "1") + r; 
        n /= 2;
    }
    return r;
}

int main(int argv, char* argc[]) {
    int n;
    std::cin >> n;
    std::cout<< toBinary(n);

    return EXIT_SUCCESS;
}*/

/**************
 * Output:    *
 *   101      *
 *   100000   *
 *   1        *
 **************/
