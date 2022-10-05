// Copyright (c) 2022 Katie G All rights reserved.
//
// Created by: Katie G
// Date: October 3rd, 2022
// This program gets the subtotal from
// the user and then calculates the
// amount of dollars the user will
// pay in taxes if they make their purchase
// in Nunavut using the tax rate of 5%
// then the program calculates the amount
// the user will pay in total,
// subtotal and tax together.
#include <iomanip>
#include <iostream>

// this function calculates the dollars in tax
// and then the total cost including tax
// if the purchase is made in Nunavut.
int main() {
    // declaring constant of tax rate
    const float TAX_RATE = 0.05;

    // declaring and initializing subtotal, tax,
    // total variables
    float taxDollars, subtotal, total;

    // getting user input for subtotal
    std::cout << "Please enter the subtotal in CAD: ";
    std::cin >> subtotal;

    // calculating the dollars spent in tax
    // and the total spent.
    taxDollars = subtotal * TAX_RATE;
    total = subtotal + taxDollars;

    // displaying the results of the above calculations
    // back to the user.
    std::cout << "In Nunavut, the amount in tax added";
    std::cout << " to your subtotal will be : $ ";
    std::cout << std::fixed << std::setprecision(2)
    << std::setfill('0') << taxDollars;
    std::cout << " CAD." << std::endl;
    std::cout << "In Nunavut, with that subtotal, you will end up paying $";
    std::cout << std::fixed << std::setprecision(2)
    << std::setfill('0') << total;
    std::cout << " CAD in total with taxes added.\n" << std::endl;
}
