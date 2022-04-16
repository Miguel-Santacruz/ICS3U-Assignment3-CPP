// Copyright (c) 2022 Miguel Santacruz All rights reserved
//
// Created by: Miguel Santacruz
// Created on: Apr 2022
// This program checks if someone can vote in Canada

#include <iostream>
#include <string>

int main() {
    // This function checks age

    int age;
    std::string ageAsString;

    // Input
    std::cout << "Please enter your age: ";
    std::cin >> ageAsString;

    // Process & Output
    try {
        age = std::stoi(ageAsString);
        if (age < 0) {
            std::cout << "That is impossible, or very very confusing."
            << std::endl;
        } else if (age >= 18) {
            std::cout << "You can vote in Canada!" << std::endl;
        } else {
            std::cout << "You can not vote in Canada." << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << ageAsString << " is not an age." << std::endl;
    }

    std::cout << "\nDone" << std::endl;
}
