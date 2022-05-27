#include "include/main.hpp"
#include "include/phone.hpp"

int main()
{
    Phone phone1;
    Phone phone2("Iphone", "IJ23K", "Iphone X", 2016);
    phone1.setPhone("Samsung", "SU320K", "Galaxy", 2018);
    phone1.getPhone();
    printf("\n");
    phone2.getPhone();

    return EXIT_SUCCESS;
}