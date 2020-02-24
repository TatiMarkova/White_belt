/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 2_5                *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

/*****************
 * Input:        *
 *   a = a b c   *
 *   b = z       *
 *****************/

void MoveStrings(std::vector<std::string>& source,
                std::vector<std::string>& destination) {
    for (auto& str : source) {
        destination.push_back(str);
    }
    source.clear();
}

void Test() {
    std::vector<std::string> source = {"a", "b", "c"};
    std::vector<std::string> destination = {"z"};
    MoveStrings(source, destination);
    for (const auto& str : destination) {
        std::cout << str << " ";
    }
    std::cout << '\n';
}

int main(int argv, char* argc[]) {
    Test();

    return EXIT_SUCCESS;
}

/*******************
 * Output:         *
 *   b = z a b c   *
 *******************/
