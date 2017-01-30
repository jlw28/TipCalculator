// TipCalculator.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <cstdio>
#include "tipCalcuations.h"


int main()
{
	double bill = 0;
	double rate = 0;

	//Inquiry bill amount and tip rate
	while (true)
	{
		std::cout << "Enter bill amount: " << std::endl;
		std::cin >> bill;
		if (std::cin.good() && bill > 0)
		{
			break;
		}
		else
		{
			std::cout << "Invalid amount: Please enter a valid number for bill amount." << std::endl;
			std::cin.clear();
			std::cin.ignore(100000, '\n');  //flushes buffer
		}
	}

	while (true)
	{
		std::cout << "Enter tip rate: " << std::endl;
		std::cin >> rate;
		if (std::cin.good() && rate > 0)
		{
			break;
		}
		else
		{
			std::cout << "Invalid amount: Please enter a valid number for tip rate." << std::endl;
			std::cin.clear();
			std::cin.ignore(100000, '\n'); //flushes buffer
		}
	}

	//Calculate tip rate
	Tip t;
	t.SetBill(bill);
	t.SetTip(rate);
	t.CalculateTip();

	double total = 0;
	double tip = 0;

	tip = t.GetTip();
	total = t.GetTotal();
	//Print tip amount and total bill
	//std::cout << "Tip amount: " << tip << std::endl;
	//std::cout << "Total bill amount: " << total << std::endl;

	std::printf("Tip amount: %.2f\n", tip);
	std::printf("Total bill amount: %.2f\n", total);

	std::cin.get();
	std::cin.get();

    return 0;
}

