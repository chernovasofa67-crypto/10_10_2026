//
// Created by Евгения on 10.10.2026.
//
#include "Visa.h"
#include <iostream>

Visa::Visa(std::string country, std::string openDate, std::string closeDate)
    : countryName(std::move(country)),
      visaOpenDate(std::move(openDate)),
      visaCloseDate(std::move(closeDate)) {}

void Visa::showVisaInfo() const {
    std::cout << "  - Віза: " << countryName
              << " | Дійсна з: " << visaOpenDate
              << " до: " << visaCloseDate << "\n";
}
