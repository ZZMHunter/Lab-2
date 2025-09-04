/*
Author: Zhao Zhang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab-1D

Write a program that will calculate the Fibonacci Sequence up in an array of 60
*/

#include <iostream>

int main() {
    //creates an array of 60 and initialized index 0 and index 1 to 0 and 1, as the start of the fibonacci sequence
    int fib[60];
    fib[0] = 0;
    std::cout << fib[0] << std::endl;
    fib[1] = 1;
    std::cout << fib[1] << std::endl;
    //sets values of the array as part of the fibonacci sequence's formula
    for (int i = 2; i < 60; i ++){
        fib[i] = fib[i-1] + fib[i-2];
        std::cout << fib[i] << std::endl;
    }
    return 0;
    //the numbers after 2 billion changes because the compiler is based on a 
    //32-bit integer system and cannot calculate past 2,147,483,647
}