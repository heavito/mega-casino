#pragma once
#include "includes.h"

class user {
private:
    std::string name;
    std::string password;
public:
    user() {
    }

    void reguser() {
        std::cout << "Registration";
        std::cout << "\n login:";
        std::cin >> name;
        std::cout << "\n pass:";
        std::cin >> password;
    }
};