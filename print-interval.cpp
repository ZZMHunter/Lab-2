/*
Author: Zhao Zhang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab-1B

Write a program print-interval.cpp that asks the user to
input two integers L and U (representing the lower and upper limits of the interval),
and print out all integers in the range L ≤ i < U separated by spaces.
Notice that we include the lower limit, but exclude the upper limit
*/

#include <iostream>

int main()
{
    //creates integers L and U
    int L;
    int U;
    std::cout << "Please enter L: ";
    std::cin >> L;
    std::cout << "Please enter U: ";
    std::cin >> U;
    //takes inputs from user for integers L and U
    if (L > U)
    {
        //makes sure that int U is greater than int L
        std::cout << "Error: Int U has to be greater than Int L";
        return 1;
    }
    //prints integers from L to U
    for (int i = L; i < U; i++)
    {
        std::cout << i << " ";
    }
    return 0;
}