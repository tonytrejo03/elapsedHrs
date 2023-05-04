//
//  main.cpp
//  assisgment1.cpp
//
//  Created by Anthony Trejo on 2/24/23.
//
//  This program will ask the user for an hour
//  then ask for the elapsed time and return
//  the current time.

#include <iostream>

int main(int argc, const char * argv[]) {
    int hours_per_day = 24;
    int elapsed_hours = 0;
    char am_pm = 0;
    std::cout << "Enter the starting hour: ";
    std::cin >> hours_per_day;
    std::cout << "\nEnter a for am or p for pm: ";
    std::cin >> am_pm;
    std::cout << "\nEnter the number of elapsed hours: ";
    std::cin >> elapsed_hours;
    int time = hours_per_day + elapsed_hours;
    if (time > 12) {
        time = time - 12;
    }
    std::cout << "\nThe time is: " << time;
    return 0;
}
