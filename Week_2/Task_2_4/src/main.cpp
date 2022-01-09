/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 2_4                *
 * "Maximizer"              *
 ****************************/

#include <iostream>

/*************
 * Input:    *
 *   a = 5   *
 *   b = 3   *
 *************/

void UpdateIfGreater(int first, int& second) {
    if (first > second) 
        second = first;
}

void Test() {
    int a = 5, b = 3;
    UpdateIfGreater(a, b);
    std::cout << b << '\n';
}

int main(int argv, char* argc[]) {
    //Test();

    return EXIT_SUCCESS;
}

/*************
 * Output:   *
 *   b = 5   *
 ************/
