/*************************************
 * Coursera                          *
 * White belt                        *
 * @autor: Tatiana Markova           *
 * task: 1_5                         *
 * "Calculating the cost of goods"   *
 *************************************/

#include <iostream>
#include <cstdlib>

/*****************************
 * Input:                    *
 *   100  110  120  5  10    *
 *   115  110  120  5  10    *
 *   150  110  120  5  12.5  *
 *    N    A    B   X   Y    *
 *****************************/

int main(int argv, char* argc[]) {
    double N, A, B, X, Y;
    std::cin >> N >> A >> B >> X >> Y;
    
    //version_1
    if (N > B)  
        std::cout << N - (N / 100 * Y) << '\n';
    else if (N > A) 
        std::cout << N - (N / 100 * X) << '\n';
    else 
        std::cout << N << '\n';
    

    //version_2
    /*if (N > B)  
        N -= N / 100 * Y;
    else if (N > A) 
        N -= N / 100 * X;
   
    std::cout << N << '\n';*/


    return EXIT_SUCCESS;
}

/**************
 * Output:    *
 *   100      *
 *   109.25   *
 *   131.25   *
 **************/
