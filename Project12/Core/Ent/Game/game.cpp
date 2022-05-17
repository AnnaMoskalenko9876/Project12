#include"game.h"
void print(int**& field, int size1)
{
	if (size1 == 3)
	{
		cout << "\t\t-------------------" << endl;
		for (int y = 0; y < size1; y++)
		{
			cout << "\t\t|" << setw(3);
			for (int r = 0; r < size1; r++)
				cout << field[y][r] << setw(3) << "|" << setw(3);
			cout << endl;
		}
		cout << "\t\t-------------------" << endl;
	}
	else if (size1 == 4)
	{
		cout << "\t\t-------------------------" << endl;
		for (int y = 0; y < size1; y++)
		{
			cout << "\t\t|" << setw(3);
			for (int r = 0; r < size1; r++)
				cout << field[y][r] << setw(3) << "|" << setw(3);
			cout << endl;
		}
		cout << "\t\t-------------------------" << endl;
	}
}



void computer(int**& field, int size1)
{

}
//сделай границы
void human(int**& field, int size1)
{
	int t;
	bool win = false;
	bool a = false;
	do
	{
		system("cls");
		print(field, size1);
		t = _getch();
		cout << t;
		a = false;
		for (int y = 0; y < size1; y++)
		{
			if (a == true)
				break;
			for (int r = 0; r < size1; r++)
			{
				if (t == 119)
				{
					if (field[y][r] == 0 && y != 0)
					{
						a = true;
						swap(field[y][r], field[y - 1][r]);
						break;
					}
				}
				else if (t == 115)
				{
					if (field[y][r] == 0 && y != size1 - 1)
					{
						a = true;
						swap(field[y][r], field[y + 1][r]);
						break;
					}
				}
				else if (t == 97)
				{
					if (field[y][r] == 0 && r != 0)
					{
						a = true;
						swap(field[y][r], field[y][r - 1]);
						break;
					}
				}
				else if (t == 100)
				{
					if (field[y][r] == 0 && r != size1 - 1)
					{
						a = true;
						swap(field[y][r], field[y][r + 1]);
						break;
					}
				}
			}
		}

	} while (win != true);


}

int checks(int** &field, int a, int size1)
{
	int t;
	t = (size1 * size1) - 1;
	bool prov = false;
	do {

		if (a > t)
		{
			prov = false;
			cout << "ERROR!";
			cin >> a;
		}
		else
			prov = true;
		for (int p = 0; p < size1; p++)
		{
			if (prov == false)
				break;
			for (int k = 0; k < size1; k++)
			{
				if (a == field[p][k])
				{
					prov = false;
					cout << "ERROR!";
					cin >> a;
					break;
				}
				else
					prov = true;
			}
		}
	} while (prov != true);
	return a;
}

//измени вывод
void manual(int** &field, int size1)
{
	int y = 0;
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size1; j++)
		{
			if (i == size1 - 1 && j == size1 - 1)
				break;
			print(field, size1);
			cin >> y;
			field[i][j] = checks(field, y, size1);
			system("cls");
		}
	}
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
			human(field, size1);
			break;
		}
		case(2):
		{
			system("cls");
			computer(field, size1);
			break;
		}
		}
		system("cls");
	} while (a != 0);
}

void computerom(int** &field, int size1)
{
	/*int num;
	bool u = true;
	srand(time(NULL));
	int t; 
	t = (size1 * size1) - 1;
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size1; j++)
		{
			do
			{
				num = rand() % t;
				for (int p = 0; p < size1; p++)
				{
					for (int e = 0; e < size1; e++)
					{
						if (field[p][e] == num)
						{
							u = false;
							break;
						}
					}
					if (u == false)
						break;
				}
			} while (u != true);
			field[i][j] = num;
		}
	}*/
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
			human(field, size1);
			break;
		}
		case(2):
		{
			system("cls");
			computer(field, size1);
			break;
		}
		}
		system("cls");
	} while (a != 0);
}

void three_x_three()
{
	int size1 = 3;
	int**field = new int*[size1];
	for (int i = 0; i < size1; i++)
		field[i] = new int[size1];
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size1; j++)
			field[i][j] = 0;
	}
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
			manual(field, size1);
			break;
		}
		case(2):
		{
			system("cls");
			computerom(field, size1);
			break;
		}
		}
		system("cls");
	} while (a != 0);
}

void four_x_four()
{
	int size1 = 4;
	int** field = new int* [size1];
	for (int i = 0; i < size1; i++)
		field[i] = new int[size1];
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size1; j++)
			field[i][j] = 0;
	}
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
			manual(field, size1);
			break;
		}
		case(2):
		{
			system("cls");
			computerom(field, size1);
			break;
		}
		}
		system("cls");
	} while (a != 0);
}