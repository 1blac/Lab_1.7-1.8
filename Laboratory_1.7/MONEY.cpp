#include "MONEY.h"
#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <string>
#include <sstream>
using namespace std;
void MONEY::Init_UAH(long x, long y, long f, long w)
{
    First_UAH = x;
    Second_UAH = y;
    Fractions_number_UAH = f;
    mul_Number_UAH = w;
}
void MONEY::Init_Pennies(double h, double z, double r, double j)
{
    First_Pennies = h;
    Second_Pennies = z;
    Fractions_number_Pennies = r;
    mul_Number_Pennies = j;
}

void MONEY::Read()
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
long MONEY::add_UAH()
{
    return  First_UAH + Second_UAH;
}
long MONEY::sub_UAH()
{
    return  First_UAH - Second_UAH;
}
long MONEY::div_Sums_UAH()
{
    return add_UAH() * 1. / sub_UAH();
}
long MONEY::div_Fractional_UAH()
{
    return sqrt(Fractions_number_UAH) * 1. / div_Sums_UAH();
}
long MONEY::mul_UAH()
{
    return sqrt(Fractions_number_UAH) * mul_Number_UAH;
}
void MONEY::Display()
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
double MONEY::add_Pennies()
{
    return (First_Pennies * 0.01) + (Second_Pennies * 0.01);
}
double MONEY::sub_Pennies()
{
    return (First_Pennies * 0.01) - (Second_Pennies * 0.01);
}
double MONEY::div_Sums_Pennies()
{
    return add_Pennies() / sub_Pennies();
}
double MONEY::div_Fractional_Pennies()
{
    return sqrt((Fractions_number_Pennies) * 0.01) / div_Sums_Pennies();
}
double MONEY::mul_Pennies()
{
    return sqrt((Fractions_number_Pennies) * 0.01) - (mul_Number_Pennies * 0.01);
}
void MONEY::Ñomparison()
{
    if (mul_UAH() == mul_Pennies())
        cout << mul_UAH() << " = " << mul_Pennies() << " \n ";
    if (mul_UAH() > mul_Pennies())
        cout << mul_UAH() << " > " << mul_Pennies() << " \n ";
    if (mul_UAH() < mul_Pennies())
        cout << mul_UAH() << " <  " << mul_Pennies() << " \n ";
}