#pragma once
#include <iostream>
#include <cstring>
class user {
private:
    char name[16];
    char password[32];
public:
    void setuser();
    char *getuserlogin();
    char* getuserpass();
};