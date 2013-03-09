#include <GasPump.h>
#include <cstdio>
GassPump::GasPump()
{
	hightOctane = 50;
	medOctane = 50;
	lowOctane = 50;
	priceHigh = 2.50;
	priceMed = 2.25;
	priceLow = 2.00;
};
GasPump::GasPump(int l, int m, int h)
{	
	hightOctane = h;
	medOctane = setMedGal(m);
	lowOctane = setLowGal(l);
	priceHigh = 2.50;
	priceMed = 2.25;
	priceLow = 2.00;
};
GasPump::GasPump(double prl, double prm, double prh)
{
	hightOctane = 50;
	medOctane = 50;
	lowOctane = 50;
	priceHigh = getPriceHigh(prh);
	priceMed = prm;
	priceLow = prl;
}
void GasPump::setHighGal(int gallons)
{
	if(gallons > 0)
	{
		hightOctane = gallons;
	}
	
}
void GasPump::setHighPrice(int price)
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
void GasPump::setMedPrice(int price)
{
	if(price < 0.0)
	{
		priceMed = gallons;
	}
}
void GasPump::setLowGal(int gallons)
{
	if(gallons > 0)
	{
		lowOctane = gallons;
	}
}
void GasPump::setLowPrice(int price)
{
	if(price < 0.0)
	{
		lowPrice = price;
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
double GasPump::getPriceLow()
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
double GaPump::salePriceHigh(int gal)
{
	double feeHigh;
	fee = gal * priceHigh;
	highOctane = getHigh() - gal;
	totalHigh += fee;
	return fee;
}
double GasPump::salePriceMed(int gal)
{	
	double feeMed;
	feeMed = gal * priceMed;
	medOctane = getMed() - gal;
	totalMed += feeMed; 
	return feeMed;
}
double GasPump::salsePriceLow(int gal)
{
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
	print("The amount of gas\n");
	printf("High Octane: %d gallons\n", getHigh());
	printf("Med Octane: %d gallons\n", getMed());
	printf("Low Octane: %d gallons\n", getLow());

	print("The amount of cash earned\n");
	printf("High Octane: $ %f\n", getPriceHigh());
	printf("Med Octane: $ %f\n", getPriceMed());
	printf("Low Octane: $ %f\n", getPriceLow());
}
