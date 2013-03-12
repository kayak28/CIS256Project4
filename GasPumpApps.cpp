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
		cout << "which gas do you want to guy?"
		     << "\n1: High Octane"<<" 2: Med Octane"<< " 3: Low octane" 
		     << " 4: Show current states"
		     << "\n5: Exit this program";
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
						cout <<"$ " 
						     <<  station.salePriceHigh(station.getHigh())
						     << "\n";
						cout << "Cost $ " << station.getPriceHigh()
						     << " gas/gallon\n";
					}
					else
					{
						
						cout << "$ " << station.salePriceHigh(gallons)
						     << "\n";
						cout << "Cost $ " << station.getPriceHigh()
						     << " gas/gallon\n";
					}
					cout << "High octane is " << station.getHigh()
					     << " left\n";
				}
				break;
			case 2:
				if(station.emptyMed())
				{
					cout << "Med octant is now empty";
				}
				else
				{
					cout << "How much gas will you buy?\n";
					cin >> gallons;
					if(gallons > station.getMed())
					{
						cout << "$ " 
						     <<station.salePriceMed(station.getMed())
						     << "\n";
						cout << "Cost $ " << station.getPriceMed()
						     << " gas/gallon\n";
						
					}
					else
					{
						cout << "$ " 
						     <<  station.salePriceMed(gallons)
						     << "\n";
						cout << "Cost $ " << station.getPriceMed()
						     << "gas/gallons\n"; 
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
						cout << "$ "
						     << station.salePriceLow(station.getLow())
						     << "\n";
						cout << "Cost $ " << station.getPriceLow()
						     << "gas/gallons\n";
					}
					else
					{
						cout << "$ "
						     << station.salePriceLow(gallons)
						     << "\n";
						cout << "Cost $ " << station.getPriceLow()
						     << "gas/gallons\n";
					}
					cout << "Low octant gas is "<< station.getLow() <<"left\n";
				}
				break;
			case 4: 
				 station.display(cout);
			case 5:
				cout << "thank you for buying gas!\n";
				cout << "Programmed by Kaya Ota\n";
				break;	
				
		}//switch 
	}while(gasType != 5);
	

	
	return 0;
}
