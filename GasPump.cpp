#include "GasPump.h"
#include <iostream>

using namespace std;
GasPump::GasPump()
{
	highOctane = 50;
	medOctane = 50;
	lowOctane = 50;
	priceHigh = 2.50;
	priceMed = 2.25;
	priceLow = 2.00;
	totalHigh = 0.0;
	totalMed = 0.0;
	totalLow = 0.0;
}
GasPump::GasPump(int l, int m, int h)
{	
	setHighGal(h);
	setMedGal(m);
	setLowGal(l);
	priceHigh = 2.50;
	priceMed = 2.25;
	priceLow = 2.00;
	totalHigh = 0.0;
	totalMed = 0.0;
	totalLow = 0.0;
}
GasPump::GasPump(double prl, double prm, double prh)
{
	highOctane = 50;
	medOctane = 50;
	lowOctane = 50;
	setPriceHigh(prh);
	setPriceMed(prm);
	setPriceLow(prl);
	totalHigh = 0.0;
	totalMed = 0.0;
	totalLow = 0.0;
}
void GasPump::setHighGal(int gallons)
{
	if(gallons > 0)
	{
		highOctane = gallons;
	}
	
}
void GasPump::setPriceHigh(double price)
{
	if(price > 0.0)
	{
		priceHigh =  price;
	}
}
void GasPump::setMedGal(int gallons)
{
	if(gallons > 0)
	{
		medOctane = gallons;
	}
}
void GasPump::setPriceMed(double price)
{
	if(price > 0.0)
	{
		priceMed = price;
	}
}
void GasPump::setLowGal(int gallons)
{
	if(gallons > 0)
	{
		lowOctane = gallons;
	}
}
void GasPump::setPriceLow(double price)
{
	if(price < 0.0)
	{
		priceLow = price;
	}
}
//octante
int GasPump::getHigh() const
{
	return highOctane;
}
int GasPump::getMed() const
{
	return medOctane;
}
int GasPump::getLow() const
{
	return lowOctane;
}
//getters for price
double GasPump::getPriceHigh() const
{
	return priceHigh;
}
double  GasPump::getPriceMed() const
{
	return priceMed;
}
double GasPump::getPriceLow() const
{
	return priceLow;
}
//check if the tanks are empty
bool GasPump::emptyHigh() const
{
	if(getHigh() <= 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool GasPump::emptyMed() const
{
	if(getMed() <= 0)
	{
		return true;
	}
	else
	{
		return false; 
	}
}
bool GasPump::emptyLow() const
{
	if(getLow() <= 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
double GasPump::salePriceHigh(int gal)
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	double feeHigh;
	feeHigh = gal * priceHigh;
	highOctane = getHigh() - gal;
	totalHigh += feeHigh;
	return feeHigh;
}
double GasPump::salePriceMed(int gal)
{
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	double feeMed;
	feeMed = gal * priceMed;
	medOctane = getMed() - gal;
	totalMed += feeMed; 
	return feeMed;
}
double GasPump::salePriceLow(int gal)
{
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	double feeLow;
	feeLow = gal * priceLow;
	lowOctane = getLow() - gal;
	totalLow += feeLow;
	return feeLow;
}
double GasPump::earnedHigh()
{
	return totalHigh;
}
double GasPump::earnedMed()
{
	return totalMed;
}
double GasPump::earnedLow()
{
	return totalLow;
}
void GasPump::display(ostream& out) const
{
	out <<"The amount of gas\n" 
	    <<"High Octane: " <<  getHigh() <<"gallons\n"
	    <<"Med Octane:" << getMed() << "gallons\n"
	    <<"Low Octane:" << getLow() <<"gallons\n"
	    <<"The amount of cash earned\n"
	    <<"High Octane: $ "<< getPriceHigh()
	    <<"\nMed Octane: $ "<< getPriceMed()
	    <<"Low Octane: $ " <<  getPriceLow();
}
