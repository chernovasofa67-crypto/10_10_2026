
#include <iostream>
#include "Passport.h"
#include "Visa.h"
#include "ForeignPassport.h"

using namespace std;

int main() {
    // Встановлення локалі для відображення кирилиці
    setlocale(LC_ALL, "Ukrainian");

    // 10 параметрів згідно з Passport.h
    Passport passport(
        "AB", "123456", "Ivanenko", "Ivan", "Petrovych",
        "15.05.2005", "Ukraine", "20.06.2025", "State Migration Service", "Kyiv"
    );

    // 11 параметрів (10 базових + 1 власний номер закордонного паспорта в кінці)
    ForeignPassport foreignPassport(
        "AB", "654321", "Ivanenko", "Ivan", "Petrovych",
        "15.05.2005", "Ukraine", "10.07.2025", "State Migration Service", "Kyiv",
        "FP123456"
    );

    // Створення віз
    Visa visa1("Poland", "01.08.2025", "15.08.2025");
    Visa visa2("Germany", "10.09.2025", "20.09.2025");

    // Агрегація
    foreignPassport.addVisa(visa1);
    foreignPassport.addVisa(visa2);

    // Виведення даних
    passport.showInfo();
    foreignPassport.showInfo();

    return 0;
}
