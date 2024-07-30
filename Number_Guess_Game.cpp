#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	cout << "******************* NUMBER GUESSING GAME *******************" << endl;

	srand(time(0));
	int choice;
	int inputnumber;
	int randnumber;

	cout << " choose an number " << endl;
	cout << " 1. easy mode " << endl;
	cout << " 2. normal mode " << endl;
	cout << " 3. hard mode " << endl;
	cin >> choice;

	while (choice == 1 || choice == 2 || choice == 3)
	{
		if (choice == 1)
		{
			randnumber = rand() % 10 + 1;
			cout << " Now you're in easy mode, the numbers range from 1 to 10 " << endl;
		}
		else if (choice == 2)
		{
			randnumber = rand() % 100 + 1;
			cout << " Now you're in normal mode, the numbers range from 1 to 100 " << endl;
		}
		else if (choice == 3)
		{
			randnumber = rand() % 1000 + 1;
			cout << " Now you're in hard mode, the numbers range from 1 to 1000 " << endl;
		}

		cout << " enter a number " << endl;
		cin >> inputnumber;

		while (inputnumber != randnumber)
		{
			if (inputnumber < randnumber)
				cout << "your guess is low" << endl;
			else
				cout << "your guess is high" << endl;
			cout << "choose again " << endl;
			cin >> inputnumber;
		}
		cout << " you got it, the number is: " << randnumber << endl;


		cout << " choose an number " << endl;
		cout << " 1. easy mode " << endl;
		cout << " 2. normal mode " << endl;
		cout << " 3. hard mode " << endl;
		cin >> choice;
	}

	return 0;
}