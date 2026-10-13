//
// Created by Евгения on 10.10.2026.
//

#ifndef INC_10_10_2026_PASSPORT_H
#define INC_10_10_2026_PASSPORT_H


#include <string>

class Passport {
protected:
    std::string series;
    std::string number;
    std::string surname;
    std::string firstName;
    std::string birthDate;
    std::string birthPlace;
    std::string passportIssueDate;
    std::string issuedBy;

private:
    std::string patronymic;
    std::string registration;

public:
    Passport(std::string ser, std::string num, std::string sur, std::string name,
             std::string patr, std::string bDate, std::string bPlace,
             std::string iDate, std::string iBy, std::string reg);

    virtual ~Passport() = default;
    virtual void showInfo() const;
};


#endif //INC_10_10_2026_PASSPORT_H
