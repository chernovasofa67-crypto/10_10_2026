//
// Created by Евгения on 10.10.2026.
//

#ifndef INC_10_10_2026_VISA_H
#define INC_10_10_2026_VISA_H


#include <string>

class Visa {
protected:
    std::string countryName;       // # Назва країни
    std::string visaOpenDate;      // # Дата відкриття візи
    std::string visaCloseDate;     // # Дата закриття візи

public:
    Visa(std::string country, std::string openDate, std::string closeDate);
    void showVisaInfo() const;
};


#endif //INC_10_10_2026_VISA_H
