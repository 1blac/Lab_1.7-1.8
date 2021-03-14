#pragma once
#include <iostream>

using namespace std;

class PAYMENT
{
    int Rate, Seniority, Allowance, Worked_out_days, Working_days;
public:
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
		void Сomparison();
	};

	int GetRate() const { return Rate; }
	int GetSeniority() const { return Seniority; }
	int GetAllowance() const { return Allowance; }
	int Getspent() const { return Worked_out_days; }
	int GetWorking_days() const { return Working_days; }
	void SetRate(int value)
	{
		{
			if (value < 6000)
			{
				int R = 0;

				system("color 4F ");
				system("color 4F ");
				cout << " Це ж навіть не мінімалка >:| ,введіть інше значення" << endl;
				cout << " Rate in UAH =  ";
				system("color 0F ");
				cin >> R;
				SetRate(R);
			}
			else
			{
				Rate = value;
			}


		}

	}
	void SetAllowance(int value)
	{
		{
			{
				if (value > 100 || value < 0)
				{
					int p = 0;

					system("color 4F ");
					system("color 4F ");
					cout << " Надбавка більша за зарплату,ти що депутат?,введіть інше значення" << endl;
					cout << " Allowance Percentage = ";
					system("color 0F ");
					cin >> p;
					SetAllowance(p);
				}
				else
				{
					Allowance = value;
				}


			}
		}

	}
	void SetSeniority(int value)
	{

		if (value > 2021 || value < 1961)
		{
			int S = 0;

			system("color 4F ");
			system("color 4F ");
			cout << " Ви вказали або майбутню дату,або дату,яка не відповідає пенсійному віку,введіть інше значення" << endl;
			cout << " Year of employment = ";
			system("color 0F ");
			cin >> S;
			SetSeniority(S);

		}
		else
		{
			Seniority = value;
		}

	}
	void SetWorked_out_days(int value)

	{


		{
			if (value > 31 || value < 0)
			{
				int W = 0;

				system("color 4F ");
				system("color 4F ");
				cout << " У місяці лише 31 день розумнику,введіть інше значення" << endl;
				cout << " Number of worked out days per month = ";
				system("color 0F ");
				cin >> W;
				SetWorked_out_days(W);
			}
			else
			{
				Worked_out_days = value;
			}
		}


	}

	void SetWorking_days(int value)
	{
		{
			if (value > 31 || value < 0)
			{
				int V = 0;

				system("color 4F ");
				system("color 4F ");
				cout << " Я бачу ти не вчишся на своїх помилках...,введіть інше значення" << endl;
				cout << " Number of working days per month = ";
				system("color 0F ");
				cin >> V;
				SetWorking_days(V);
			}
			else
			{
				Working_days = value;
			}


		}
	}
	void Init(int, int, int, int, int);
	void Read();
	void Display();

private:
    PAYMENT::MONEY p;
};
