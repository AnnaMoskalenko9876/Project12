#include"game.h"

void computer(int**& field)
{

}
//сделай границы
void human(int**& field, int size1)
{
	int t;
	bool win = false;
	do
	{
		system("cls");
		cout << "\t\t-------------" << endl;
		for (int y = 0; y < size1; y++)
		{
			cout << "\t\t| ";
			for (int r = 0; r < size1; r++)
				cout << field[y][r] << " | ";
			cout << endl;
		}
		cout << "\t\t-------------" << endl;
		t = _getch();
		cout << t;
		for (int y = 0; y < size1; y++)
		{
			for (int r = 0; r < size1; r++)
			{
				if (t == 119)
				{
					if (field[y][r] == 0)
						swap(field[y][r], field[y - 1][r]);
				}
				else if (t == 115)
				{
					if (field[y][r] == 0)
						swap(field[y][r], field[y + 1][r]);
				}
				else if (t == 97)
				{
					if (field[y][r] == 0)
						swap(field[y][r], field[y][r - 1]);
				}
				else if (t == 100)
				{
					if (field[y][r] == 0)
						swap(field[y][r], field[y][r + 1]);
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
			if (i == 2 && j == 2)
				break;
			cout << "\t\t-------------" << endl;
			for (int y = 0; y < size1; y++)
			{
				cout << "\t\t| ";
				for (int r = 0; r < size1; r++)
					cout << field[y][r] << " | ";
				cout << endl;
			}
			cout << "\t\t-------------" << endl;
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
			computer(field);
			break;
		}
		}
		system("cls");
	} while (a != 0);
}

void computerom(int** &field, int size1)
{
	srand(time(NULL));
	int t; 
	t = (size1 * size1) - 1;
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size1; j++)
			field[i][j] = rand() % t;
	}
	/*for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size1; j++)
		{
			cout << field[i][j] << " ";
		}
		cout << endl;
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
			computer(field);
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