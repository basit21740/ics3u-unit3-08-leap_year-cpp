// Copyright (c) 2021 Abdul Basit All rights reserved.
//
// Created by: Abdul Basit
// Created on: Nov 2021
// this program tells about leap years

#include <iostream>
#include <string>

int main() {
    // this function determine leap years

    // define variables
    std::string integerAsString;
    int year;

    // input
    std::cout << "Please enter the year: " ;
    std::cin >> integerAsString;

    // process & output
    try {
        year = std::stoi(integerAsString);
        if (year % 400 == 0) {
            std::cout << year << " is definitely a leap year" << std::endl;
        } else if (year % 100 == 0) {
            std::cout << year << " is not a leap year" << std::endl;
        } else if (year % 4 == 0) {
            std::cout << year << " is definitely a leap year" << std::endl;
        } else {
            std::cout << year << " is not a leap year" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << integerAsString << " is not an integer" 
        << std::endl;
    }

    // output 
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}