#include "MenuH.h"

int MenuH::userInput(int range)
{
	std::string userChoice;
	std::cin >> userChoice;
	bool validChoice = false;
	while (!validChoice) {
		if (userChoice.length() == 1 && userChoice[0] > 48 && userChoice[0] <= range + 48) {
			validChoice = true;
		} else {
			std::cout << "Please enter a valid option" << std::endl;
			std::cin >> userChoice;
		}
	}
	return std::stoi(userChoice);
}

void MenuH::mainMenu()
{
	const char* text =
		"	Hotel\n"
		"	-----\n"
		"===========================\n"
		"1: Reservation\n"
		"  -> Reservation gestion\n"
		"2: Quit\n"
		"  -> Exit the app\n"
		"===========================\n"
		"Choose the desired option...\n";
	std::cout << text << std::endl;
}

void MenuH::reservationMenu()
{
	const char* text =
		"	Reservation\n"
		"	-----------\n"
		"===========================\n"
		"1: Add\n"
		"  -> Add new reservation\n"
		"2: Remove\n"
		"  -> Remove an existing reservation\n"
		"3: Display Bookings\n"
		"  -> Display all Bookings\n"
		"4: Return\n"
		"  -> Return to main menu\n"
		"===========================\n"
		"Choose the desired option...\n";
	std::cout << text << std::endl;
}