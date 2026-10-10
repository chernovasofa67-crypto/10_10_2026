//
// Created by Евгения on 10.10.2026.
//

#include "ForeignPassport.h"
#include <iostream>

ForeignPassport::ForeignPassport(std::string ser, std::string num, std::string sur, std::string name,
                                 std::string patr, std::string bDate, std::string bPlace,
                                 std::string iDate, std::string iBy, std::string reg,
                                 std::string fNum)
    : Passport(std::move(ser), std::move(num), std::move(sur), std::move(name),
               std::move(patr), std::move(bDate), std::move(bPlace),
               std::move(iDate), std::move(iBy), std::move(reg)),
      foreignNumber(std::move(fNum)) {}

void ForeignPassport::addVisa(const Visa& visa) {
    visaVector.push_back(visa);
}

void ForeignPassport::showInfo() const {
    std::cout << "=== ЗАКОРДОННИЙ ПАСПОРТ ===\n"
              << "Surname/Name: " << surname << " " << firstName << "\n"
              << "Закордонний №: " << foreignNumber << "\n"
              << "Базові дані (Серія/Номер): " << series << " " << number << "\n"
              << "Дійсні візи:\n";

    if (visaVector.empty()) {
        std::cout << "  Візи відсутні.\n";
    } else {
        for (const auto& visa : visaVector) {
            visa.showVisaInfo();
        }
    }
    std::cout << "\n";
}
