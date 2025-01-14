#include "Contact.hpp"
#include <iostream>
#include <iomanip>

void Contact::setDetails() {
	std::cout << "Enter first name: ";
	std::getline(std::cin, firstName);
	std::cout << "Enter last name: ";
	std::getline(std::cin, lastName);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Enter phone number: ";
	std::getline(std::cin, phoneNumber);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, darkestSecret);

	if (firstName.empty() || lastName.empty() || nickname.empty() ||
		phoneNumber.empty() || darkestSecret.empty()) {
		std::cerr << "Error: All fields must be filled.\n";
		setDetails();
	}
}

void Contact::displaySummary(int index) const {
	std::cout << std::setw(10) << index << "|"
			<< std::setw(10) << truncate(firstName) << "|"
			<< std::setw(10) << truncate(lastName) << "|"
			<< std::setw(10) << truncate(nickname) << "\n";
}

void Contact::displayDetails() const {
	std::cout << "First name: " << firstName << "\n";
	std::cout << "Last name: " << lastName << "\n";
	std::cout << "Nickname: " << nickname << "\n";
	std::cout << "Phone number: " << phoneNumber << "\n";
	std::cout << "Darkest secret: " << darkestSecret << "\n";
}

std::string Contact::truncate(const std::string& str) const {
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}