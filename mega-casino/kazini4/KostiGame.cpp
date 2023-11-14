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
			resultkosti = randkosti(1, 6);
			std::cout <<"\n*******\n"<<"res="<< resultkosti << "\n********\n";
			std::cout << "0 - exit\n1 - back" << std::endl;
			std::cin >> exitkosti;
		}
	}
	if (exitkosti == 0)
	{
		std::cout << "ty for play bb\n";
		return 0;
	}
}