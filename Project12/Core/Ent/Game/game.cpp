#include"game.h"
void print_win()
{
	cout << " .----------------.  .----------------.  .-----------------." << endl;
	cout << "| .--------------. || .--------------. || .--------------. |" << endl;
	cout << "| | _____  _____ | || |     _____    | || | ____  _____  | |" << endl;
	cout << "| ||_   _||_   _|| || |    |_   _|   | || ||_   \\|_   _| | |" << endl;
	cout << "| |  | | /\\ | |  | || |      | |     | || |  |   \\ | |   | |" << endl;
	cout << "| |  | |/  \\| |  | || |      | |     | || |  | |\\ \\| |   | |" << endl;
	cout << "| |  |   /\\   |  | || |     _| |_    | || | _| |_\\   |_  | |" << endl;
	cout << "| |  |__/  \\__|  | || |    |_____|   | || ||_____|\\____| | |" << endl;
	cout << "| |              | || |              | || |              | |" << endl;
	cout << "| '--------------' || '--------------' || '--------------' |" << endl;
	cout << " '----------------'  '----------------'  '----------------' " << endl;
}

void win(int**& field, int size1)
{
	int arr1[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 0 } };
	int arr2[4][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 }, { 13, 14, 15, 0 } };
	int count = 0;
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size1; j++)
		{
			if (size1 == 8)
			{
				if (field[i][j] == arr1[i][j])
					count++;
			}
			else if (size1 == 15)
			{
				if (field[i][j] == arr2[i][j])
					count++;
			}
		}
	}
	if (count == 8 && size1 == 8)
		print_win();
	else if (count == 15 && size1 == 15)
		print_win();
}

void print(int**& field, int size1)
{
	if (size1 == 3)
	{
		cout << "\t\t\t/-----------------\\" << endl;
		for (int y = 0; y < size1; y++)
		{
			cout << "\t\t\t|" << setw(3);
			for (int r = 0; r < size1; r++)
				cout << field[y][r] << setw(3) << "|" << setw(3);
			cout << endl;
		}
		cout << "\t\t\t\\-----------------/" << endl;
	}
	else if (size1 == 4)
	{
		cout << "\t\t\t/-----------------------\\" << endl;
		for (int y = 0; y < size1; y++)
		{
			cout << "\t\t\t|" << setw(3);
			for (int r = 0; r < size1; r++)
				cout << field[y][r] << setw(3) << "|" << setw(3);
			cout << endl;
		}
		cout << "\t\t\t\\\-----------------------/" << endl;
	}
}

void print_filling()
{
	cout << " .----------------.  .----------------.  .----------------.  .----------------. " << endl;
	cout << "| .--------------. || .--------------. || .--------------. || .--------------. |" << endl;
	cout << "| |  _________   | || |     _____    | || |   _____      | || |   _____      | |" << endl;
	cout << "| | |_   ___  |  | || |    |_   _|   | || |  |_   _|     | || |  |_   _|     | |" << endl;
	cout << "| |   | |_  \\_|  | || |      | |     | || |    | |       | || |    | |       | |" << endl;
	cout << "| |   |  _|      | || |      | |     | || |    | |   _   | || |    | |   _   | |" << endl;
	cout << "| |  _| |_       | || |     _| |_    | || |   _| |__/ |  | || |   _| |__/ |  | |" << endl;
	cout << "| | |_____|      | || |    |_____|   | || |  |________|  | || |  |________|  | |" << endl;
	cout << "| |              | || |              | || |              | || |              | |" << endl;
	cout << "| '--------------' || '--------------' || '--------------' || '--------------' |" << endl;
	cout << " '----------------'  '----------------'  '----------------'  '----------------' " << endl;
}

void print_tag()
{
	cout << " .----------------.  .----------------.  .----------------. " << endl;
	cout << "| .--------------. || .--------------. || .--------------. |" << endl;
	cout << "| |  _________   | || |      __      | || |    ______    | |" << endl;
	cout << "| | |  _   _  |  | || |     /  \\     | || |  .' ___  |   | |" << endl;
	cout << "| | |_/ | | \\_|  | || |    / /\\ \\    | || | / .'   \\_|   | |" << endl;
	cout << "| |     | |      | || |   / ____ \\   | || | | |    ____  | |" << endl;
	cout << "| |    _| |_     | || | _/ /    \\ \\_ | || | \\ `.___]  _| | |" << endl;
	cout << "| |   |_____|    | || ||____|  |____|| || |  `._____.'   | |" << endl;
	cout << "| |              | || |              | || |              | |" << endl;
	cout << "| '--------------' || '--------------' || '--------------' |" << endl;
	cout << " '----------------'  '----------------'  '----------------' " << endl;
	/*cout << "________________________¶¶ " << endl;
	cout << "_______________________¶__¶ " << endl;
	cout << "_______________________¶___¶ " << endl;
	cout << "_______________________¶____¶ " << endl;
	cout << "_________¶¶¶¶¶_________¶____¶ " << endl;
	cout << "_________¶__¶¶¶¶¶¶_____¶____¶ " << endl;
	cout << "_________¶____¶¶__¶¶___¶____¶___¶¶ " << endl;
	cout << "__________¶_____¶¶__¶¶_¶____¶¶¶¶¶¶¶ " << endl;
	cout << "___________¶______¶¶__¶_¶¶¶¶____¶¶¶ " << endl;
	cout << "¶¶¶_________¶¶______¶__¶¶__________¶¶ " << endl;
	cout << "¶__¶__________¶¶¶____¶¶________¶¶¶¶¶¶¶ " << endl;
	cout << "¶___¶__________¶¶¶¶_______________¶ " << endl;
	cout << "¶__¶_____________¶________¶_¶¶¶___¶ " << endl;
	cout << "_¶_¶_____________¶_______¶_¶_¶¶___¶ " << endl;
	cout << "_¶¶______________¶_________¶_¶¶___¶ " << endl;
	cout << "_¶_¶_____________¶_________¶¶¶_____¶¶¶ " << endl;
	cout << "_¶_¶_____________¶__¶__________¶¶____¶ " << endl;
	cout << "_¶_¶______________¶___¶________¶_¶¶__¶ " << endl;
	cout << "_¶__¶_____________¶____¶¶_______¶¶¶¶¶ " << endl;
	cout << "__¶__¶¶¶¶¶¶¶¶____¶¶______¶¶¶¶¶¶¶¶¶¶¶ " << endl;
	cout << "___¶_________¶¶¶¶¶¶________¶ " << endl;
	cout << "__¶________________________¶ " << endl;
	cout << "__¶________________________¶ " << endl;
	cout << "__¶________________________¶ " << endl;
	cout << "___¶________¶_________¶¶___¶ " << endl;
	cout << "____¶_______¶___¶______¶__¶¶¶¶¶¶ " << endl;
	cout << "__¶¶_______¶____¶______¶¶¶_____¶ " << endl;
	cout << "_¶______¶¶¶¶¶¶¶_¶_____¶¶¶¶¶¶¶___¶ " << endl;
	cout << "__¶___¶¶__¶__¶_¶¶¶___¶______¶__¶ " << endl;
	cout << "___¶__¶____¶__¶__¶__¶____¶¶¶__¶ " << endl;
	cout << "____¶__¶____¶__¶ ¶__¶___¶¶__¶¶ " << endl;
	cout << "____¶__¶_____¶¶¶¶¶__¶___¶¶¶¶" << endl;
	cout << "____¶¶¶¶______¶¶¶¶__¶ " << endl;
	cout << "____¶¶¶¶__________¶__¶ " << endl;
	cout << "___________________¶¶¶¶ " << endl;
	cout << "___________________¶¶¶¶" << endl;

	cout << ".......¶¶¶¶..................." << endl;
	cout << "......¶¶....¶¶¶¶¶..¶¶¶¶.¶¶¶¶.." << endl;
	cout << "......¶..........¶¶¶¶.¶¶....¶." << endl;
	cout << "......¶..........¶.¶¶¶¶¶¶...¶." << endl;
	cout << ".....¶..........¶¶¶¶¶...¶¶¶¶¶." << endl;
	cout << "....¶................¶¶¶¶¶¶¶¶." << endl;
	cout << "...¶...................¶¶¶¶¶.." << endl;
	cout << ".¶¶¶.....¶.................¶.." << endl;
	cout << "...¶....¶¶.................¶.." << endl;
	cout << "...¶¶................¶¶....¶.." << endl;
	cout << "..¶¶¶........¶¶¶.....¶¶...¶¶.." << endl;
	cout << ".....¶¶..................¶¶¶.." << endl;
	cout << ".......¶¶¶.............¶¶¶...." << endl;
	cout << "...¶¶¶¶¶.¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶......" << endl;
	cout << "...¶....¶¶¶¶¶....¶¶¶¶...¶....." << endl;
	cout << "...¶....¶¶¶.¶¶¶¶¶¶¶¶...¶¶¶...." << endl;
	cout << "...¶¶¶¶¶¶¶¶¶¶¶¶¶..¶¶¶¶¶...¶¶.." << endl;
	cout << "..¶......¶¶¶¶¶¶¶¶¶¶¶.......¶.." << endl;
	cout << ".¶.........¶¶¶¶¶¶¶¶........¶.." << endl;
	cout << "..¶........¶¶¶¶¶¶¶¶........¶.." << endl;
	cout << "..¶¶........¶¶..¶¶......¶¶..." << endl;
	cout << "....¶¶¶¶¶¶¶.......¶¶¶¶¶¶....." << endl;*/

}

void print_rules_and_gaming()
{
	cout << "<------------------------------RULES OF THE GAME------------------------------>" << endl;
	cout << "The numbers are already scattered randomly.\nBy clicking on the knuckle, you can move it in the direction of a free cell.\nTry to distribute them in order using the least number of moves." << endl;
	cout << "<----------------------------------------------------------------------------->" << endl;
	Sleep(10000);
	system("cls");
	cout << "\t\t\t<-------CONTROL------->" << endl;
	cout << "\t\t\t\t# # # #" << endl;
	cout << "\t\t\t\t#  W  #" << endl;
	cout << "\t\t\t\t# # # #" << endl;
	cout << "\t\t\t# # # #\t\t# # # #" << endl;
	cout << "\t\t\t#  A  #\t\t#  D  #" << endl;
	cout << "\t\t\t# # # #\t\t# # # #" << endl;
	cout << "\t\t\t\t# # # #" << endl;
	cout << "\t\t\t\t#  S  #" << endl;
	cout << "\t\t\t\t# # # #" << endl;
	cout << "\t\t\t<-------------------->" << endl;
	cout << "\t\t\t    Are you ready?" << endl;
}
void print_play()
{
		system("cls");
		cout << " .----------------.  .----------------.  .----------------.  .----------------. " << endl;
		cout << "| .--------------. || .--------------. || .--------------. || .--------------. |" << endl;
		cout << "| |   ______     | || |   _____      | || |      __      | || |  ____  ____  | |" << endl;
		cout << "| |  |_   __ \\   | || |  |_   _|     | || |     /  \\     | || | |_  _||_  _| | |" << endl;
		cout << "| |    | |__) |  | || |    | |       | || |    / /\\ \\    | || |   \\ \\  / /   | |" << endl;
		cout << "| |    |  ___/   | || |    | |   _   | || |   / ____ \\   | || |    \\ \\/ /    | |" << endl;
		cout << "| |   _| |_      | || |   _| |__/ |  | || | _/ /    \\ \\_ | || |    _|  |_    | |" << endl;
		cout << "| |  |_____|     | || |  |________|  | || ||____|  |____|| || |   |______|   | |" << endl;
		cout << "| |              | || |              | || |              | || |              | |" << endl;
		cout << "| '--------------' || '--------------' || '--------------' || '--------------' |" << endl;
		cout << " '----------------'  '----------------'  '----------------'  '----------------' " << endl;

}

//sortirovky sdelai
void computer(int**& field, int size1)
{
}

void human(int**& field, int size1)
{
	int t;
	char u = 'y', y;
	bool win = false;
	bool a = false;
	print_rules_and_gaming();
	cin >> y;
	if (u == y)
	{
		do
		{
			system("cls");
			print_play();
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
	else
		exit(0);


}

int checks(int** &field, int a, int size1, bool chec)
{
	int t;
	t = (size1 * size1) - 1;
	bool prov = false;
	do {
			if (a > t)
			{
				prov = false;
				if (chec == true)
				{
					cout << "ERROR!";
					cin >> a;
				}
				else if (chec == false)
					a = rand() % t + 1;
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
						if (chec == true)
						{
							cout << "ERROR!";
							cin >> a;
						}
						else if (chec == false)
							a = rand() % t + 1;
						break;
					}
					else
						prov = true;
				}
			}
	} while (prov != true);
	return a;
}

void manual(int** &field, int size1)
{
	int y = 0;
	bool chec = true;
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size1; j++)
		{
			print_filling();
			if (i == size1 - 1 && j == size1 - 1)
				break;
			print(field, size1);
			cin >> y;
			field[i][j] = checks(field, y, size1, chec);
			system("cls");
		}
	}
	system("cls");
	int a, b = 0;
	const int size = 2;
	string arrow[size] = { "-------", " " };
	do
	{
		print_tag();
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
	int num;
	bool u = true, chec = false;
	srand(time(NULL));
	int t; 
	t = (size1 * size1) - 1;
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size1; j++)
		{
			if (i == size1 - 1 && j == size1 - 1)
				break;
			print_tag();
			print(field, size1);
			num = rand() % t + 1;
			field[i][j] = checks(field, num, size1, chec);
			system("cls");
		}
	}
	int a, b = 0;
	const int size = 2;
	string arrow[size] = { "-------", " " };
	do
	{
		print_tag();
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
		print_tag();
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
		print_tag();
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