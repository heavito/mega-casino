#pragma once
#include "includes.h"
class user {
private:
    char name[16];
    char password[32];
    int money;
public:
    void setuser();
    char *getuserlogin();
    char* getuserpass();
};