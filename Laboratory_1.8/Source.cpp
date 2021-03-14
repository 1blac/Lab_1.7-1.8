#include "PAYMENT.h"
#include <Windows.h>
#include <iostream>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	PAYMENT z;
	PAYMENT::MONEY p;
	cout << " Payment: " << endl;
	z.Read();
	cout << " ========================================================================= ";
	z.Display();
	cout << " ========================================================================= " << endl;
	cout << " Money: " << endl;
	p.Read();
	cout << " ========================================================================= ";
	p.Display();
	cout << " \n ";
	p.Ñomparison();
	return 0;
}