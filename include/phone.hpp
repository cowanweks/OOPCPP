#ifndef PHONE_H
#define PHONE_H

#include <iostream>

class Phone
{
private:
    std::string name;
    std::string serial;
    std::string model;
    int year;

public:
    Phone();
    Phone(std::string pname, std::string pserial, std::string pmodel, int pyear);
    void setPhone(std::string pname, std::string pserial, std::string pmodel, int pyear);
    void getPhone();
};
#endif // PHONE_H