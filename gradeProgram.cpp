// Copyright (c) 2023 Zak Goneau All rights reserved.
//
// Created by: Zak Goneau
// Date Created: Nov. 30, 2023
// This program converts a level mark to a percentage.

#include <iostream>
#include <string>

std::string CalcMark(std::string level) {
    // declare mark variable
    std::string mark;

    // check all levels then return value
    if (level == "4+") {
        mark = "98";
        return mark;
    }
    if (level == "4") {
        mark = "91";
        return mark;
    }
    if (level == "4-") {
        mark = "83";
        return mark;
    }
    if (level == "3+") {
        mark = "78";
        return mark;
    }
    if (level == "3") {
        mark = "75";
        return mark;
    }
    if (level == "3-") {
        mark = "71";
        return mark;
    }
    if (level == "2+") {
        mark = "68";
        return mark;
    }
    if (level == "2") {
        mark = "65";
        return mark;
    }
    if (level == "2-") {
        mark = "61";
        return mark;
    }
    if (level == "1+") {
        mark = "58";
        return mark;
    }
    if (level == "1") {
        mark = "55";
        return mark;
    }
    if (level == "1-") {
        mark = "51";
        return mark;
    }
    if (level == "0") {
        mark = "49";
        return mark;
    } else {
        mark = "-1";
        return mark;
    }
}

int main() {
    // declare variables
    std::string userMark, markPercent;

    // introduce program to user
    std::cout << "Hello, this program converts your";
    std::cout << "level mark to a percentage." << std::endl;

    // get user input
    std::cout << "Please enter your mark: ";
    std::cin >> userMark;

    // call function
    markPercent = CalcMark(userMark);

    // check if invalid input
    if (markPercent == "-1") {
        std::cout << "Please enter a valid mark.";

    // check if level zero
    } else if (markPercent == "49") {
        std::cout << "" << userMark << " is a failing mark.";
        std::cout << "It is below 50 %." << std::endl;

        // tell user their percent
    } else {
        std::cout << "Your mark of " << userMark;
        std::cout <<" is " << markPercent << "%" << std::endl;
    }
}
