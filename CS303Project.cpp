#include "CS303_1.h"
#include <iostream>
#include <fstream>
#include <algorithm> 



int main()
{
    const int ARRAY_SIZE = 100;
    int num[ARRAY_SIZE];
    int count = 0;
    int toFind;
    int newValue;
    int i;
    const int ARRAY_SIZE2 = 101;
    int newArray[ARRAY_SIZE2];

    // prompts the user to enter the integer they want to find in the array.
    std::cout << "Please enter the integer you want to find: ";
    std::cin >> toFind;

    ifstream inputFile;

    // opens the text file.    
    inputFile.open("Text.txt");

    // Read the numbers from the file into the array.
    while (count < ARRAY_SIZE && inputFile >> num[count]) {
        count++;
    }

    // Close the file.
    inputFile.close();

    // Finds the whatever number the user inputed into the array and then using std::distance finds the location of the number in the array.
    int* found = std::find(std::begin(num), std::end(num), toFind);
    if (found != std::end(num))
    {
        int spaceInArray = std::distance(num, found);
        std::cout << "The integer " << toFind << " is in index location " << spaceInArray << "\n";
    }
    else
    {
        std::cout << "The integer is not in the array.\n";
    }
    // Asks the user to input whatever location in the array they want to delete.
    std::cout << "What index do you want to delete: ";
    int valueZero;
    std::cin >> valueZero;
    // implementation of the void function in the .h file to delete the index that the user chose.
    Delete(num, ARRAY_SIZE, valueZero);
    if (valueZero > ARRAY_SIZE) {
        std::cout << " ";
    }
    else {
        for (i = 0; i < 99; i++) {
            std::cout << num[i] << " ";
        }
    }
    std::cout << " " << "\n";
    // runs this block of code under a try block.
    try {
        std::cout << "What index in the array do you want to change: ";
        int intChanged;
        std::cin >> intChanged;
        std::cout << "What do you want it changed to: ";
        int ChangedTo;
        std::cin >> ChangedTo;
        if (ChangedTo > 0) {
            for (int i = 0; i < ARRAY_SIZE; i++) {
                num[intChanged] = ChangedTo;
                std::cout << num[i] << " ";
            }
            std::cout << " " << "\n";

            std::cout << "The old index " << intChanged << " is now " << num[intChanged] << "\n";
        }
        else {
            throw(ChangedTo); // throws code to the catch block and handles the error.
        }
    }
    catch (int changedNum) {
        cout << "Cannot use that number.\n";
    }
    // asks user what integer they want to add to the end of the array.
    try {
        std::cout << "What integer do you want to add to the end of the array: ";
        int newInt;
        std::cin >> newInt;
        if (newInt > 0) {
            std::copy(num, num + ARRAY_SIZE2, newArray);

            for (int i = 0; i < ARRAY_SIZE2; i++) {
                newArray[100] = newInt;
                std::cout << newArray[i] << " ";
            }
        }
        else {
            // if the newInt is less than 0 throws code.
            throw (newInt);
        }
    }
    catch (int myNum) { // catches code thrown and outputs error message.
        cout << "Cannot use that number.\n";
    }
    return 0;
}
