#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

public:
    void setDetails();
    void displaySummary(int index) const;
    void displayDetails() const;

private:
    std::string truncate(const std::string& str) const;
};

#endif