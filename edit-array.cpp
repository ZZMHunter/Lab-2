/*
Author: Zhao Zhang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab-1C

Write a program edit-array.cpp that creates an array of 10 integers, and provides the user with an interface to edit any of its elements.
Specifically, it should work as follows:

1. Create an array myData of 10 integers.
2. Fill all its cells with value 1 (using a for loop).
3. Print all elements of the array on the screen.
4. Ask the user to input the cell index i, and its new value v.
5. If the index i is within the array range (0 ≤ i < 10), update the asked cell, myData[i] = v, and go back to the step 3.
   Otherwise, if index i is out of range, the program exits.
*/

#include <iostream>

int main()
{
    int myData[10];
    int index;
    int value;
    //creates variables index, and value and also creates an array of 10
    for (int i = 0; i < 10; i++)
    {
        myData[i] = 1;
    }
    //sets all values in the array to 1
    do
    {
        //prints out all values in the array
        for (int i = 0; i < 10; i++)
        {
            std::cout << myData[i] << " ";
        }
        std::cout << std::endl;
        //takes user inputs for index and value, then sets the array's index to the specified value
        std::cout << "Input index: ";
        std::cin >> index;
        std::cout << "Input value: ";
        std::cin >> value;
        myData[index] = value;
    } while (index < 10 || index > -1);
    std::cout << "Index out of range. Exit";
    return 0;
}