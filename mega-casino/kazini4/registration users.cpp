#include "registration users.h"
void user::setuser()
{
    std::cout << "Registration";
    std::cout << "\n login:";
    std::cin >> this->name;
    std::cout << "\n pass:";
    std::cin >> this->password;
};
void user::getuser()
{
    std::cout << this->name << std::endl;
    std::cout << this->password << std::endl;
};