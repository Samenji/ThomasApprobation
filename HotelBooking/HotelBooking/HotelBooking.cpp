#include <iostream>
#include <string>
#include "Reservation.h"
#include "MenuH.h"


    int main() 
    {
        MenuH showMenu;
        bool exit = false;
        int userChoice;
        // Reservation[] reservationList;
        // std::array reservationList;
        Reservation reservationList[50]; 

        while (!exit) {
            showMenu.mainMenu();
            userChoice = showMenu.userInput(2);
            system("CLS");

            if (userChoice == 1) { 
                showMenu.reservationMenu();
                userChoice = showMenu.userInput(4);

                int i; 
                switch (userChoice) {
                case 1: 
                    system("CLS");
                    std::cout << "Adding reservation" << std::endl;
                    std::cin >> i;
                    break;
                case 2:
                    system("CLS");
                    std::cout << "Removing reservation" << std::endl;
                    std::cin >> i;

                    break;
                case 3: 
                    system("CLS");
                    std::cout << "Displaying reservation" << std::endl;
                    std::cin >> i;

                    break;
                }
                
              
                system("CLS");
            }
            else {
                exit = true;
            }
        }

        return 0;
    }