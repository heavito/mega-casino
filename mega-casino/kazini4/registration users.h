#pragma once
#include <iostream>
#
class user {
private:
    char name[16];
    char password[32];
public:
    void setuser();
    void getuser();
};