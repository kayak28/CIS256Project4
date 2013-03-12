#include <iostream>
#include "GasPump.h"
using namespace std;

int main()
{	
	int tankSize;
	int gasType;
	int gallons;
	double highPrice;
	double medPrice;
	double lowPrice;
	cout << "Enter the amont of gallon";
	cin >> tankSize;
	
	cout << "Enter the price for high octane";
	cin >> highPrice;
	cout << "Enter the price for med octane";
	cin >> medPrice;
	cout << "Enterthe price for low octane";
	cin >> lowPrice;
	
	GasPump station; 
	station.setHighGal(tankSize);
	station.setMedGal(tankSize);
	station.setLowGal(tankSize);

	station.setPriceHigh(highPrice);
	station.setPriceMed(medPrice);
	station.setPriceLow(lowPrice);

	do
	{
		cout << "which gas do you want to guy?\n"
		     << "\n1: High Octane"<<" 2: Med Octane"<< " 3: Low octane"
		     << "\n4: Exit this program";
		cin >> gasType;
		switch(gasType)
		{
			case 1: 
				if(station.emptyHigh())
				{
					
					cout << "High Octane is now empty\n";
				}
				else
				{
					cout << "How much gas will you buy?\n";	
					cin >> gallons;
					if(gallons > station.getHigh())
					{
						station.salePriceHigh(station.getHigh());
					}
					else
					{
						station.salePriceHigh(gallons);
					}
					cout << "High octane is" << station.getHigh() << "left\n";
				}
				break;
			case 2:
				if(station.emptyMed())
				{
					cout << "Med Octane is now empty\n";
				}
				else
				{
					cout << "How much gas will you buy?\n";
					cin >> gallons;
					if(gallons > station.getMed())
					{
						station.salePriceMed(station.getMed());
					}
					else
					{
						station.salePriceMed(gallons);
					}
					cout << "Med octane is "<<station.getMed() << "left\n";
				}
				break;
			case 3:
				if(station.emptyLow())
				{
					cout << "Low octant is now empty\n";
				}
				else
				{
					cout << "How much gas will you buy?\n";
					cin >> gallons;
					if(gallons > station.getLow())
					{
						station.salePriceLow(station.getLow());
					}
					else
					{
						station.salePriceLow(gallons);
					}
					cout << "Low octant gas is "<< station.getLow() <<"left\n";
				}
				break;
			case 4:
				cout << "thank you for buying gas!\n";
				cout << "Programmed by Kaya Ota\n";
				break;	
				
		}//switch 
	}while(gasType != 4);
	

	
	return 0;
}
