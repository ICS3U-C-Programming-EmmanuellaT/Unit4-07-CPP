// Copyright (c) 2026 Emmanuella Taiwo All rights reserved
// Created by: Emmanuella Taiwo
// Date: 26th Nov,2026
// This program prints out numbers from 1000 to 2000 in 5 numbers in one line.

#include <iostream>

int main() {
    // process and output of the numbers in a for loop
    for (int counter = 1000; counter <= 2000; ++counter) {
        if ((counter - 1000) % 5 == 0) {
            std::cout << counter << std::endl;
        } else {
            std::cout << counter << " ";
        }
    }
    return 0;
}
