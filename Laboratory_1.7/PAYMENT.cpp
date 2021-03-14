#include "PAYMENT.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
#include <string>
#include <sstream>
using namespace std;

string Name;
string Surname;
string Patronymic;

void PAYMENT::Init(int R, int S, int A, int W, int V)
{
	SetRate(R);
	SetAllowance(A);
	SetSeniority(S);
	SetWorked_out_days(W);
	SetWorking_days(V);
	
}
void PAYMENT::Read()
{
	int R, S, A, W, V;
	cout << " Name = "; cin >> Name;
	cout << " Surname = "; cin >> Surname;
	cout << " Patronymic = "; cin >> Patronymic;
	cout << " rate in UAH = "; cin >> R;
	SetRate(R);
	cout << " Allowance Percentage = "; cin >> A;
	SetAllowance(A);
	cout << " Year of employment = "; cin >> S;
	SetSeniority(S);
	cout << " Number of worked out days per month = "; cin >> W;
	SetWorked_out_days(W);
	cout << " Number of working days per month = "; cin >> V;
	SetWorking_days(V);
	
}
void PAYMENT::Display()
{
	cout << endl;
	cout << " Name = " << Name << endl;
	cout << " Surname = " << Surname << endl;
	cout << " patronymic = " << Patronymic << endl;
	cout << " Number of worked out days per month = " << Worked_out_days << " днів " << endl;
	cout << " Number of working days per month = " << Working_days << " днів " << endl;
	cout << " pension fund = 13% and Income tax = 1% " << endl;
	cout << " Calculation of the amount with allowance = " << (Rate * 1. / 100 * Allowance) + Rate << endl;
	cout << " Calculation of the amount of tax = " << ((Rate * 1. / 100 * Allowance) + Rate) * 1. / 100 * 14 << endl;
	cout << " Calculation of taxed money = " <<((Rate * 1. / 100 * Allowance) + Rate) - ((Rate * 1. / 100 * Allowance) + Rate) * 1. / 100 * 14 << endl;
	cout << " Seniority = " << 2021 - Seniority << " років " << endl;
}


