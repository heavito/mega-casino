#pragma once
#pragma execution_character_set ("utf-8")
#include <iostream>
#include <string>
#include <Windows.h>
#include "registration users.h"
void fullscreen()
{
	keybd_event(VK_MENU, 0x38, 0, 0);
	keybd_event(VK_RETURN, 0x1c, 0, 0);
	keybd_event(VK_RETURN, 0x1c, KEYEVENTF_KEYUP, 0);
	keybd_event(VK_MENU, 0x38, KEYEVENTF_KEYUP, 0);
}
int exitprogramm()
{
	int want = 1;
	while (want != 0)
	{
		std::cout<< "\n\n\nSend 0 if you want close this programm\n";
		std::cin >> want;
	}
	return 0;
}

