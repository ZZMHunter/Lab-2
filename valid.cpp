/*
Author: Zhao Zhang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab-1A

Write a program valid.cpp, which asks the user to input an integer in the range 0 < n < 100.
If the number is out of range, the program should keep asking to re-enter until a valid number is input.
*/

#include <iostream>

int main()
{
    //take input x
    int x;
    std::cout << "Input an integer between 0 and 100: " << std::endl;
    std::cin >> x;
    //makes sure input x is within range of 0 and 100
    if (x > 0 && x < 100)
    {
        //squares input x
        x *= x;
    }
    //returns the squared number
    std::cout << "The number squared is" + x << std::endl;
    return 0;
}