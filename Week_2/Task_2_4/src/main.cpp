/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 2_4                *
 ****************************/

#include <iostream>
#include <cstdlib>

/*************
 * Input:    *
 *   a = 5   *
 *   b = 3   *
 *************/

void UpdateGreater(const int& first, int& second) {
    if (first > second) second = first;
}

void Test() {
    int a = 5, b = 3;
    UpdateGreater(a, b);
    std::cout << b << '\n';
}

int main(int argv, char* argc[]) {
    Test();

    return EXIT_SUCCESS;
}

/*************
 * Output:   *
 *   b = 5   *
 ************/
