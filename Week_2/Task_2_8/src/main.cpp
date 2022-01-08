/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 2_8                *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <vector>

/********************
 * Input:           *
 *   5              *
 *   7 6 3 0 9      *
 ********************/

int main(int argv, char* argc[]) {
    int n, t, sum;
    std::cin >> n;
    std::vector<unsigned int> temp(n);
    for (auto& t : temp) {
        std::cin >> t;
        sum += t;
    }
    unsigned int average = sum / n;

    std::vector<int> indexes;
    for (int i = 0; i < temp.size(); i++) {
        if (temp[i] > average)
            indexes.push_back(i);
    }
    std::cout << indexes.size() << '\n';
    for (const auto& i : indexes)  {
        std::cout << i << ' ';
    }
    std::cout << '\n';
    return EXIT_SUCCESS;
}

/********************
 * Output:          *
 *   3              *
 *   0 1 4          *
 ********************/
