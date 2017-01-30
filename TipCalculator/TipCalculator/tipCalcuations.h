#pragma once
//#include "tipCalcuations.cpp"
#ifndef __TIP
#define __TIP



class Tip
{
public:
	Tip();
	/*Tip(double, double);*/
	~Tip();
	void SetTip(double _rate);
	double GetTip();
	void SetBill(double _bill);
	double GetTotal();
	void CalculateTip();

private:
	double rate;
	double tip;
	double bill;
	double total;

};

#endif // !__TIP
