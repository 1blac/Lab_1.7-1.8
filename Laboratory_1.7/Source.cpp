#include "MONEY.h"
#include "PAYMENT.h"
#include <Windows.h>
#include <iostream>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	PAYMENT z;
	cout << " Payment: " << endl;
	z.Read();
	cout << " ========================================================================= ";
	z.Display();
	MONEY s;
	cout << " ========================================================================= " << endl;
	cout << " Money: " << endl;
	s.Read();
	cout << " ========================================================================= ";
	s.Display();
	cout << " \n ";
	s.Ñomparison();
	return 0;
}