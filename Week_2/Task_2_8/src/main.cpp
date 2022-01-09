/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 2_8                *
 * "Average temperature"    *
 ****************************/

#include <iostream>
#include <vector>

/********************
 * Input:           *
 *   5              *
 *   7 6 3 0 9      *
 ********************/

int main(int argv, char* argc[]) {
    int n, sum = 0;
    std::cin >> n;
    std::vector<unsigned int> temperature(n);
    for (auto& t : temperature) {
        std::cin >> t;
        sum += t;
    }
    unsigned int average = sum / n;

    std::vector<int> indexes;
    for (int i = 0; i < temperature.size(); ++i) {
        if (temperature[i] > average)
            indexes.push_back(i);
    }
    std::cout << indexes.size() << std::endl;
    for (const auto& i : indexes)  {
        std::cout << i << ' ';
    }
    std::cout << std::endl;
    return EXIT_SUCCESS;
}

/********************
 * Output:          *
 *   3              *
 *   0 1 4          *
 ********************/
