/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 2_5                *
 * "Moving strings"         *
 ****************************/

#include <iostream>
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

void PrintVect(const std::vector<std::string>& vs) {
    for (const auto& str : vs) {
        std::cout << str << " ";
    }
}

void Test() {
    std::vector<std::string> source = {"a", "b", "c"};
    std::vector<std::string> destination = {"z"};
    MoveStrings(source, destination);
    PrintVect(source);
    std::cout << std::endl;
    PrintVect(destination);
    std::cout << std::endl;
}

int main(int argv, char* argc[]) {
    //Test();

    return EXIT_SUCCESS;
}

/*******************
 * Output:         *
 *   a =           *
 *   b = z a b c   *
 *******************/
