#include "registration users.h"
void user::setuser()
{
    std::cout << "\nlogin:";
    std::cin >> this->name;
    std::cout << "\npassword:";
    std::cin >> this->password;
};
char* user::getuserlogin()
{
    return this->name;
};
char* user::getuserpass()
{
    return this->password;
};
int user::getmoney()
{
    int money = 5000;
    return this->money;
}