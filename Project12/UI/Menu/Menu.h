#pragma once
#include"../../Core/Ent/Game/game.h"
void menu()
{
	int a, b = 0;
	const int size = 2;
	string arrow[size] = { "---", " " };

	do
	{
		cout << "\t\tChoice of game mode\n";
		cout << "\t\t-------------------\n";
		cout << "\t\t3x3\t\t4x4\n";

		for (int i = 0; i < size; i++)
			cout << "\t\t" << arrow[i];
		cout << endl;


		a = _getch();

		for (int i = 0; i < size; i++)
		{
			if (a == 77 && i + 1 < 2)
			{
				if (arrow[i] == "---")
				{
					arrow[i + 1] = arrow[i];
					arrow[i] = " ";
					break;
				}
			}
			else if (a == 75 && i + 1 < 2)
			{
				if (arrow[i + 1] == "---")
				{
					arrow[i] = arrow[i + 1];
					arrow[i + 1] = " ";
					break;
				}
			}
		}
		if (a == 13)
		{
			for (int i = 0; i < size; i++)
			{
				if (arrow[i] == "---")
					b = i + 1;
			}
		}
		switch (b)
		{
		case(1):
		{
			system("cls");
			three_x_three();
			break;
		}
		case(2):
		{
			system("cls");
			four_x_four();
			break;
		}
		}
		system("cls");
	} while (a != 0);

}