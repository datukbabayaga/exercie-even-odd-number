// ConsoleApplication18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a;
	char choose;

	do
	{
		cout << "Please enter number :" << endl;
		cin >> a;

		if (a % 2 == 0)
			cout << a << " Is even number " << endl;
		else if (a % 2 != 0)
			cout << a << " Is odd number " << endl;

		cout << "do you want  looping again ?? :" << endl;
		cout << "The answer should be Y/y or N/n only " << endl;
		cin >> choose;


	} while (choose == 'y' || choose == 'Y');

	cout << "Thanks you " << endl;
	cout << "Have a nice day " << endl;
}