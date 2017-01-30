
#include "tipCalcuations.h"
#include <math.h>

//class Tip
//{
//public:
//	Tip();
//	Tip(double, double);
//	~Tip();
//	void SetTip(double _rate)
//	{
//		rate = _rate;
//	}
//	double GetTip()
//	{
//		return tip;
//	}
//	void SetBill(double _bill)
//	{
//		bill = _bill;
//	}
//	double GetTotal()
//	{
//		return total;
//	}
//	void CalculateTip();
//
//private:
//	double rate;
//	double tip;
//	double bill;
//	double total;
//
//};

Tip::Tip()
{
	tip = 0.0;
	bill = 0.0;
	rate = 0.0;
	total = 0.0;
}

//Tip::Tip(double _rate, double _bill)
//{
//	rate = _rate;
//	bill = _bill;
//}

Tip::~Tip()
{
}

void Tip::SetTip(double _rate)
{
	rate = _rate;
}

double Tip::GetTip()
{
	return tip;
}

void Tip::SetBill(double _bill)
{
	bill = _bill;
}

double Tip::GetTotal()
{
	return total;
}

//Calculates tip amount amd total amount
void Tip::CalculateTip()
{
	tip = bill * (rate / 100);
	total = bill + tip;
}



