#include "includes.h"
#include "registration users.h"
#include "KostiGame.h"
int main()
{
    user human;
    setlocale(LC_ALL, "ru");
    std::string loginfo;
    std::ifstream accauntcheck;
    std::ofstream accauntinfo;
    std::string path = "Accaunt.txt";
    accauntcheck.open(path);
    if (!accauntcheck.is_open())
    {
        std::cout << "\nerorr";
    }
    else
    {
        std::cout << "Welcome in mega-casino\n";
        while (!accauntcheck.eof())
        {
            loginfo = "";
            std::getline(accauntcheck, loginfo);
        }
    }
    accauntcheck.close();
    if (loginfo == "")
    {
        accauntinfo.open(path);
        if (!accauntinfo.is_open())
        {
            std::cout << "\nOshibka brat ne povezlo brat";
        }
        else
        {
            char* retlogin;
            char* retpass;
            std::cout << "\nDONE!";
            human.setuser();
            retlogin = human.getuserlogin();
            retpass = human.getuserpass();
            accauntinfo << retlogin;
            accauntinfo << "\n";
            accauntinfo << retpass;
            accauntinfo.close();
        }
    }
    kosti();
}
