#pragma once
#include <string>
#include <iostream>

class Reservation
{
public:
    Reservation();
    Reservation(std::string firstName, std::string lastName, int age); // Constructor
    bool setTime(int type, int day, int month, int year, int hour, int minutes, int seconds);
    std::string printTime(int type);
    
private:
    std::string firstName;
    std::string lastName;
    int age;
    std::string arrivalTime;
    std::string departureTime;

};