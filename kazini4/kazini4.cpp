#include "includes.h"
#include "registration users.h"
#include "KostiGame.h"
int main()
{
    setlocale(LC_ALL, "ru");
    user human;
    std::ofstream accauntinfo;
    std::string path = "Accaunt.txt";
    human.setuser();
    accauntinfo.open(path);
    if (!accauntinfo.is_open())
    {
        std::cout << "\nOshibka brat ne povezlo brat";
    }
    else
    {
        char *retlogin;
        char* retpass;
        std::cout << "\nDONE!";
        retlogin = human.getuserlogin();
        retpass = human.getuserpass();
        accauntinfo << retlogin;
        accauntinfo << "\n";
        accauntinfo << retpass;
    }
    kosti();
}
