//
// Created by Евгения on 10.10.2026.
//

#ifndef INC_10_10_2026_FOREIGNPASSPORT_H
#define INC_10_10_2026_FOREIGNPASSPORT_H

#include "Passport.h"
#include "Visa.h"
#include <vector>

class ForeignPassport : public Passport {
private:
    std::string foreignNumber;     // - Додаткове поле для номера закордонного
    std::vector<Visa> visaVector;  // - Вектор Віз (Агрегація)

public:
    ForeignPassport(std::string ser, std::string num, std::string sur, std::string name,
                    std::string patr, std::string bDate, std::string bPlace,
                    std::string iDate, std::string iBy, std::string reg,
                    std::string fNum);

    void addVisa(const Visa& visa);
    void showInfo() const override;
};




#endif //INC_10_10_2026_FOREIGNPASSPORT_H
