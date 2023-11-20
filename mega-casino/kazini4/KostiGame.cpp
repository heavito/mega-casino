#include "KostiGame.h"
#include "registration users.h"
int randkosti(int min, int max)
{
	srand(time(NULL));
	int num = min + rand() % (max - min + 1);
	return num;
}
int kosti()
{
	int bet = 0;
	int humannumber = 0;
	int prize = 0;
	user kostihuman;
	setlocale(LC_ALL, "ru");
	int exitkosti = -1;
	int resultkosti = 0;
	std::cout << "\nGame kosti:\n";
	for (int i = 0; i < 100; i++)
	{
		Sleep(10);
		std::cout << "*";
	}
	std::cout << "\n3 - play\n2-exit\n";
	std::cin >> exitkosti;
	while (exitkosti == 3)
	{
		while (exitkosti != 0)
		{
			int moneyhuman = kostihuman.setmoney();
			if (moneyhuman > 0)
			{
				std::cout << "Bet:";
				std::cin >> bet;
				std::cout << "MONEY NOW IS " << moneyhuman << std::endl;
				std::cout <<"\nNumber:";
				std::cin >> humannumber;
				std::cout << "MONEY NOW IS " << moneyhuman << std::endl;
				resultkosti = randkosti(1, 6);
				std::cout << "\n*******\n" << "res=" << resultkosti << "\n********\n";
				if (resultkosti == humannumber)
				{
					moneyhuman = moneyhuman + bet * 6;
					std::cout << "MONEY NOW IS (podshet deneg) " << moneyhuman << std::endl;
					prize = bet * 6;
					std::cout << "Congrats! you win: " << prize <<std::endl;
					kostihuman.getmoney(moneyhuman);
					std::cout << "MONEY NOW IS ITOG" << moneyhuman << std::endl;
				}
				if (resultkosti != humannumber)
				{
					moneyhuman = moneyhuman - bet;
					std::cout << "Lose your balance: " << moneyhuman << std::endl;
					kostihuman.getmoney(moneyhuman);
					std::cout << "MONEY NOW IS " << moneyhuman << std::endl;
				}
				std::cout << "0 - exit\n1 - back" << std::endl;
			}
			else
			{
				std::cout << "\nYou dont have money" << std::endl;
			}
			std::cin >> exitkosti;
		}
	}
	if (exitkosti == 0)
	{
		std::cout << "ty for play bb\n";
		return 0;
	}
}