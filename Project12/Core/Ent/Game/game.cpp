#include"game.h"
void manual()
{

}

void computerom()
{

}

void computer()
{
	int a, b = 0;
	const int size = 2;
	string arrow[size] = { "-------", " " };
	do
	{
		cout << "\t\tPlacement of spots\n";
		cout << "\t\t-------------------\n";
		cout << "\t\tManual\t\tComputer\n";

		for (int i = 0; i < size; i++)
			cout << "\t\t" << arrow[i];
		cout << endl;
		a = _getch();

		for (int i = 0; i < size; i++)
		{
			if (a == 77 && i + 1 < 2)
			{
				if (arrow[i] == "-------")
				{
					arrow[i + 1] = arrow[i];
					arrow[i] = " ";
					break;
				}
			}
			else if (a == 75 && i + 1 < 2)
			{
				if (arrow[i + 1] == "-------")
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
				if (arrow[i] == "-------")
					b = i + 1;
			}
		}
		switch (b)
		{
		case(1):
		{
			system("cls");
			manual();
			break;
		}
		case(2):
		{
			system("cls");
			computerom();
			break;
		}
		}
		system("cls");
	} while (a != 0);
}

void human()
{
	int a, b = 0;
	const int size = 2;
	string arrow[size] = { "-------", " " };
	do
	{
		cout << "\t\tPlacement of spots\n";
		cout << "\t\t-------------------\n";
		cout << "\t\tManual\t\tComputer\n";

		for (int i = 0; i < size; i++)
			cout << "\t\t" << arrow[i];
		cout << endl;
		a = _getch();

		for (int i = 0; i < size; i++)
		{
			if (a == 77 && i + 1 < 2)
			{
				if (arrow[i] == "-------")
				{
					arrow[i + 1] = arrow[i];
					arrow[i] = " ";
					break;
				}
			}
			else if (a == 75 && i + 1 < 2)
			{
				if (arrow[i + 1] == "-------")
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
				if (arrow[i] == "-------")
					b = i + 1;
			}
		}
		switch (b)
		{
		case(1):
		{
			system("cls");
			manual();
			break;
		}
		case(2):
		{
			system("cls");
			computerom();
			break;
		}
		}
		system("cls");
	} while (a != 0);
}

void three_x_three()
{
	int a, b = 0;
	const int size = 2;
	string arrow[size] = { "-------", " " };
	do
	{
		cout << "\t\tChoice of game mode\n";
		cout << "\t\t-------------------\n";
		cout << "\t\tHuman\t\tComputer\n";

		for (int i = 0; i < size; i++)
			cout << "\t\t" << arrow[i];
		cout << endl;
		a = _getch();
		
		for (int i = 0; i < size; i++)
		{
			if (a == 77 && i + 1 < 2)
			{
				if (arrow[i] == "-------")
				{
					arrow[i + 1] = arrow[i];
					arrow[i] = " ";
					break;
				}
			}
			else if (a == 75 && i + 1 < 2)
			{
				if (arrow[i + 1] == "-------")
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
				if (arrow[i] == "-------")
					b = i + 1;
			}
		}
		switch (b)
		{
		case(1):
		{
			system("cls");
			human();
			break;
		}
		case(2):
		{
			system("cls");
			computer();
			break;
		}
		}
		system("cls");
	} while (a != 0);
}

void four_x_four()
{






	int a, b = 0;
	const int size = 2;
	string arrow[size] = { "-------", " " };
	do
	{
		cout << "\t\tChoice of game mode\n";
		cout << "\t\t-------------------\n";
		cout << "\t\tHuman\t\tComputer\n";

		for (int i = 0; i < size; i++)
			cout << "\t\t" << arrow[i];
		cout << endl;
		a = _getch();

		for (int i = 0; i < size; i++)
		{
			if (a == 77 && i + 1 < 2)
			{
				if (arrow[i] == "-------")
				{
					arrow[i + 1] = arrow[i];
					arrow[i] = " ";
					break;
				}
			}
			else if (a == 75 && i + 1 < 2)
			{
				if (arrow[i + 1] == "-------")
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
				if (arrow[i] == "-------")
					b = i + 1;
			}
		}
		switch (b)
		{
		case(1):
		{
			system("cls");
			human();
			break;
		}
		case(2):
		{
			system("cls");
			computer();
			break;
		}
		}
		system("cls");
	} while (a != 0);











}