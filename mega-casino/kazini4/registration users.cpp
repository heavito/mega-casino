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
int user::getmoney(int moneyhuman)
{
    this->money = moneyhuman;
    std::cout << "MONEY NOW IS " << this->money << std::endl;
    return this->money;
}
int user::setmoney()
{
    this->money = 0;
    if (this->money == 0)
    {
        money = this->money + 1000;
    }
    std::cout << "MONEY NOW IS " << this->money << std::endl;
    return this->money;
}