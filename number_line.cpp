// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Douglass Jeffrey
// Created on: Oct 2019
// This program  prints out numbers in intervals of five numbers per line

#include <iostream>
#include <string>

main() {
    // This function prints out numbers in intervals of five numbers per line

    // variables
    int set_num = 0;
    int line_num = 0;

    // process
    for (set_num = 1000; set_num < 2001; set_num++) {
        std::cout << set_num << " ";
        if (line_num % 5 == 4) {
            std::cout << "" << std::endl;
        }
        line_num = line_num + 1;
    }
}
