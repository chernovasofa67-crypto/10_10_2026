//
// Created by Евгения on 10.10.2026.
//
#include "Passport.h"
#include <iostream>

Passport::Passport(std::string ser, std::string num, std::string sur, std::string name,
                   std::string patr, std::string bDate, std::string bPlace,
                   std::string iDate, std::string iBy, std::string reg)
    : series(std::move(ser)), number(std::move(num)), surname(std::move(sur)),
      firstName(std::move(name)), patronymic(std::move(patr)), birthDate(std::move(bDate)),
      birthPlace(std::move(bPlace)), passportIssueDate(std::move(iDate)),
      issuedBy(std::move(iBy)), registration(std::move(reg)) {}

void Passport::showInfo() const {
    std::cout << "=== ВНУТРІШНІЙ ПАСПОРТ ===\n"
              << "ПІБ: " << surname << " " << firstName << " " << patronymic << "\n"
              << "Паспорт: " << series << " " << number << "\n"
              << "Народився(-лась): " << birthDate << " в " << birthPlace << "\n"
              << "Виданий: " << passportIssueDate << " (" << issuedBy << ")\n"
              << "Прописка: " << registration << "\n\n";
};
