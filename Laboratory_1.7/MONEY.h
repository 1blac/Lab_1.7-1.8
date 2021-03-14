#pragma once
class MONEY
{
	long First_UAH, Second_UAH, Fractions_number_UAH, mul_Number_UAH;
	double First_Pennies, Second_Pennies, Fractions_number_Pennies, mul_Number_Pennies;
public:
	long GetFirst_UAH() const { return First_UAH; }
	long GetSecond_UAH() const { return Second_UAH; }
	long GetFractions_number_UAH() const { return Fractions_number_UAH; }
	long Getmul_Number_UAH() const { return  mul_Number_UAH; }
	double GetFirst_Pennies() const { return First_Pennies; }
	double GetSecond_Pennies() const { return Second_Pennies; }
	double GetFractions_number_Pennies() const { return Fractions_number_Pennies; }
	double Getmul_Number_Pennies() const { return mul_Number_Pennies; }
	void SetFirst_UAH(long value) { First_UAH = value; }
	void SetSecond_UAH(long value) { Second_UAH = value; }
	void SetFractions_number_UAH(long value) { Fractions_number_UAH = value; }
	void Setmul_Number_UAH(long value) { mul_Number_UAH = value; }
	void SetFirst_Pennies(double value) { First_Pennies = value; }
	void SetSecond_Pennies(double value) { Second_Pennies = value; }
	void SetFractions_number_Pennies(double value) { Fractions_number_Pennies = value; }
	void Setmul_Number_Pennies(double value) { mul_Number_Pennies = value; }
	void Init_UAH(long, long, long, long);
	void Init_Pennies(double, double, double, double);
	void Read();
	void Display();
	long add_UAH();
	long sub_UAH();
	long div_Sums_UAH();
	long div_Fractional_UAH();
	long mul_UAH();
	double add_Pennies();
	double sub_Pennies();
	double div_Sums_Pennies();
	double div_Fractional_Pennies();
	double mul_Pennies();
	void Ñomparison();
};