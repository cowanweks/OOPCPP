#include "include/phone.hpp"

Phone::Phone()
{
    name = "";
    serial = "";
    model = "";
    year = 0;
}
Phone::Phone(std::string pname, std::string pserial, std::string pmodel, int pyear)
{
    name = pname;
    serial = pserial;
    model = pmodel;
    year = pyear;
}
void Phone::setPhone(std::string pname, std::string pserial, std::string pmodel, int pyear)
{
    name = pname;
    serial = pserial;
    model = pmodel;
    year = pyear;
}
void Phone::getPhone()
{
    std::cout << "Name : " << name << std::endl;
    std::cout << "Serial : " << serial << std::endl;
    std::cout << "Model : " << model << std::endl;
    std::cout << "Year : " << year << std::endl;
}