#pragma once
#include <iostream>

class PAYMENT
{
	int Rate, Seniority, Allowance, Worked_out_days, Working_days;
public:
	int GetRate() const { return Rate; }
	int GetSeniority() const { return Seniority; }
	int GetAllowance() const { return Allowance; }
	int Getspent() const { return Worked_out_days; }
	int GetWorking_days() const { return Working_days; }
	void SetRate(int value) 
	{ 
		
			if (value < 6000)
			{
				int R = 0;

				system("color 4F ");
				system("color 4F ");
				std::cout << " Це ж навіть не мінімалка >:| ,введіть інше значення" << std::endl;
				std::cout << " Rate in UAH =  ";
				system("color 0F ");
				std::cin >> R;
				SetRate(R);
			}
			else
			{
				Rate = value;
			}


		
		
	}
	void SetAllowance(int value)
	{
		
			
				if (value > 100 || value < 0)
				{
					int p = 0;

					system("color 4F ");
					system("color 4F ");
					std::cout << " Надбавка більша за зарплату,ти що депутат?,введіть інше значення" << std::endl;
					std::cout << " Allowance Percentage = ";
					system("color 0F ");
					std::cin >> p;
					SetAllowance(p);
				}
				else
				{
					Allowance = value;
				}


			
		

	}
	void SetSeniority(int value)
	{
		
			if (value > 2021 || value < 1961)
			{
				int S = 0;
				
				system("color 4F ");
				system("color 4F ");
				std::cout << " Ви вказали або майбутню дату,або дату,яка не відповідає пенсійному віку,введіть інше значення" << std::endl;
				std::cout << " Year of employment = ";
				system("color 0F ");
				std::cin >> S;
				SetSeniority(S);
				
			}
			else
			{
				Seniority = value;
			}
		
	}
	void SetWorked_out_days(int value)
	
	{
		
		
		
			if (value > 31 || value < 0)
			{
				int W = 0;

				system("color 4F ");
				system("color 4F ");
				std::cout << " У місяці лише 31 день розумнику,введіть інше значення" << std::endl;
				std::cout << " Number of worked out days per month = ";
				system("color 0F ");
				std::cin >> W;
				SetWorked_out_days(W);
			}
			else
			{
				Worked_out_days = value;
			}
		

		
	}
	
	void SetWorking_days(int value)
	{
		
			if (value > 31 || value < 0)
			{
				int V = 0;

				system("color 4F ");
				system("color 4F ");
				std::cout << " Я бачу ти не вчишся на своїх помилках...,введіть інше значення" << std::endl;
				std::cout << " Number of working days per month = ";
				system("color 0F ");
				std::cin >> V;
				SetWorking_days(V);
			}
			else
			{
				Working_days = value;
			}


		
	}
	void Init(int, int, int, int, int);
	void Read();
	void Display();
};
