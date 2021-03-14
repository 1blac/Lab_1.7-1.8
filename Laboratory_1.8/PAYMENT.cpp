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
	cout << " Number of worked out days per month = " << Worked_out_days << " äí³â " << endl;
	cout << " Number of working days per month = " << Working_days << " äí³â " << endl;
	cout << " pension fund = 13% and Income tax = 1% " << endl;
	cout << " Calculation of the amount with allowance = " << (Rate * 1. / 100 * Allowance) + Rate << endl;
	cout << " Calculation of the amount of tax = " << ((Rate * 1. / 100 * Allowance) + Rate) * 1. / 100 * 14 << endl;
	cout << " Calculation of taxed money = " << ((Rate * 1. / 100 * Allowance) + Rate) - ((Rate * 1. / 100 * Allowance) + Rate) * 1. / 100 * 14 << endl;
	cout << " Seniority = " << 2021 - Seniority << " ðîê³â " << endl;
}



void PAYMENT::MONEY::Init_UAH(long x, long y, long f, long w)
{
    First_UAH = x;
    Second_UAH = y;
    Fractions_number_UAH = f;
    mul_Number_UAH = w;
}
void PAYMENT::MONEY::Init_Pennies(double h, double z, double r, double j)
{
    First_Pennies = h;
    Second_Pennies = z;
    Fractions_number_Pennies = r;
    mul_Number_Pennies = j;
}

void PAYMENT::MONEY::Read()
{
    long x, y, f, w;
    double h, z, r, j;
    cout << " UAH: " << endl;
    cout << " UAH, the first value is greater = "; cin >> x;
    cout << " UAH, the second value is less = "; cin >> y;
    cout << " Fractional number of UAH = "; cin >> f;
    cout << " Number for multiplication of UAH = "; cin >> w;
    cout << " Pennies:" << endl;
    cout << " Pennies, the first value is greater = "; cin >> h;
    cout << " Pennies, the second value is less = "; cin >> z;
    cout << " Fractional number of pennies = "; cin >> r;
    cout << " A number to multiply pennies = "; cin >> j;

    Init_UAH(x, y, f, w);
    Init_Pennies(h, z, r, j);
}
long PAYMENT::MONEY::add_UAH()
{
    return  First_UAH + Second_UAH;
}
long PAYMENT::MONEY::sub_UAH()
{
    return  First_UAH - Second_UAH;
}
long PAYMENT::MONEY::div_Sums_UAH()
{
    return add_UAH() * 1. / sub_UAH();
}
long PAYMENT::MONEY::div_Fractional_UAH()
{
    return sqrt(Fractions_number_UAH) * 1. / div_Sums_UAH();
}
long PAYMENT::MONEY::mul_UAH()
{
    return sqrt(Fractions_number_UAH) * mul_Number_UAH;
}
void PAYMENT::MONEY::Display()
{
    cout << endl;
    cout << " Adding UAH = " << add_UAH() << endl;
    cout << " Subtraction of UAH = " << sub_UAH() << endl;
    cout << " Division of UAH amounts = " << div_Sums_UAH() << endl;
    cout << " Division amounts by a fractional number for UAH = " << div_Fractional_UAH() << endl;
    cout << " Multiplication by a fractional number for UAH = " << mul_UAH() << endl;
    cout << " Adding pennies = " << add_Pennies() << endl;
    cout << " Subtraction of pennies = " << sub_Pennies() << endl;
    cout << " Division of pennies amounts = " << div_Sums_Pennies() << endl;
    cout << " Division amounts by a fractional number for pennies = " << div_Fractional_Pennies() << endl;
    cout << " Multiplication by a fractional number for pennies = " << mul_Pennies() << endl;
}
double PAYMENT::MONEY::add_Pennies()
{
    return (First_Pennies * 0.01) + (Second_Pennies * 0.01);
}
double PAYMENT::MONEY::sub_Pennies()
{
    return (First_Pennies * 0.01) - (Second_Pennies * 0.01);
}
double PAYMENT::MONEY::div_Sums_Pennies()
{
    return add_Pennies() / sub_Pennies();
}
double PAYMENT::MONEY::div_Fractional_Pennies()
{
    return sqrt((Fractions_number_Pennies) * 0.01) / div_Sums_Pennies();
}
double PAYMENT::MONEY::mul_Pennies()
{
    return sqrt((Fractions_number_Pennies) * 0.01) - (mul_Number_Pennies * 0.01);
}
void PAYMENT::MONEY::Ñomparison()
{
    if (mul_UAH() == mul_Pennies())
        cout << mul_UAH() << " = " << mul_Pennies() << " \n ";
    if (mul_UAH() > mul_Pennies())
        cout << mul_UAH() << " > " << mul_Pennies() << " \n ";
    if (mul_UAH() < mul_Pennies())
        cout << mul_UAH() << " <  " << mul_Pennies() << " \n ";
}