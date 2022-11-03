// Copyright (c) 2022 Peter Sobowale All rights reserved.
//
// This program asks the user for a positive integer. It
// then calculates the sum of the numbers from 0 up to
// that integer.
#include <iomanip>
#include <iostream>

int main() {
    // initialize the loop counter and sum
    int counter = 0;
    int sum = 0;
    int userNum;
    std::string userNumString;

    // get the user number as a string
    std::cout << "Enter a postive integer: ";
    std::cin >> userNumString;
    std::cout << "\n";

    // try catch
    try {
        // set user
        userNum = stoi(userNumString);

        // if statement to make sure it isn't a float
        if (userNum % 1 != 0) {
            // if statement for if userNum
            if (userNum < 0) {
                std::cout << "\n" << userNum
                << " is not a positive integer." << std::endl;
            } else if (userNum == 0) {
                std::cout << "0 is not a positive integer." << std::endl;
            } else {
                // calculate the sum of all numbers from 0 to user number
                while (counter <= userNum) {
                    sum = sum + counter;
                    std::cout << "Tracking "
                    << counter << " times through the loop.\n";
                    counter = counter + 1;
                }
                // display the sum to the user
                std::cout << "\nThe sum of the numbers from 0 to "
                << userNum << " is: " << sum << std::endl;
            }
        } else {
            std::cout << userNumString << " is not a positive integer."
            << std::endl;
        }
    } catch (std::invalid_argument) {
        // exception for strings and floats
        std::cout << userNumString << " is not a positive integer."
        << std::endl;
    }
    // display ending message
    std::cout << "Thanks for playing!";
}
