// Copyright (c) 2020 Rohnin Barrette All rights reserved.
//
// Created by: Rohnin Barrette
// Created on: oct 2021
// this program rounds a float to the users inputted number

#include <math.h>
#include <iostream>


float rounder(float &user_number_float, int user_round_by_int) {
    // this program rounds a float to the users inputted number
    float rounded_number;

    rounded_number = ((user_number_float * (pow(10, user_round_by_int))) + 0.5);
    rounded_number = (static_cast<int>(rounded_number));
    rounded_number = (rounded_number / (pow(10, user_round_by_int)));

    user_number_float = rounded_number;
}

int main() {
    // this function gets number_to_round and round_by_int

    float user_number_list;
    float rounded_number;
    int user_round_by_int;
    float user_number_float;
    std::string user_number_string;
    std::string user_round_by_srting;

    // input
    std::cout << "Enter a number you'd like to round: ";
    std::cin >> user_number_string;
    std::cout << "Enter the decimal place you'd like to round to: ";
    std::cin >> user_round_by_srting;

    try {
        user_number_list =  stof(user_number_string);
        user_round_by_int = stoi(user_round_by_srting);
        // call functions
        rounder(user_number_list, user_round_by_int);
        if (user_round_by_int < 0) {
            std::cout
                << "\nMake sure the number you're rounding by is positive."
                << std::endl;
        } else {
            std::cout
                << "\nThe rounded number is " << user_number_list << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "\nInvalid Input" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
