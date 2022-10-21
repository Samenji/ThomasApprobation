#include "Reservation.h"
#include <string>
#include <iostream>

Reservation::Reservation()
{
    this->firstName = "";
    this->lastName = "";
    this->age = 0;
}

Reservation::Reservation(std::string firstName, std::string lastName, int age)
{
    this->firstName = firstName;
    this->lastName = lastName;
    this->age = age;
}

bool Reservation::setTime(int type, int day, int month, int year, int hours, int minutes, int seconds)
{
    bool validTime = true;
    std::string time;

    if (day < 1 || day > 31 || month < 1 || month > 12 || year < 2022 || hours < 0 || 
        hours > 23 || minutes < 0 || minutes > 59 || seconds < 0 || seconds > 59) { 
        validTime = false; 
    }
    else {
        time = std::to_string(day) + "/" + std::to_string(month) + "/" + std::to_string(year) + " " + 
            std::to_string(hours) + ":" + std::to_string(minutes) + ":" + std::to_string(seconds); 
    }

   
    if (type == 0) {
        this->arrivalTime = time;
    }
    else {
        this->departureTime = time;
    }

    return validTime;
}

std::string Reservation::printTime(int type)
{
    std::string time;
    if(type==0) {
        time = this->arrivalTime;
    }
    else {
        time = this->departureTime;
    }

    return time;
}