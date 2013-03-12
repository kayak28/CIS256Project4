#include <ostream>
using namespace std;
class GasPump
{
	public:
		GasPump();
		GasPump(int l, int m = 100, int h = 100);
		GasPump(double prl, double prm, double prh); 
		//set functions
		void setHighGal(int gallons);
		void setMedGal(int gallons);
		void setLowGal(int gallons);

		void setPriceHigh(double price);
		void setPriceMed(double price);
		void setPriceLow(double price);
		//get functions
		int getHigh() const;
		int getMed() const;
		int getLow() const;
		
		double getPriceHigh() const;
		double getPriceMed() const;
		double getPriceLow() const;
		//other functions 
		bool emptyHigh() const;//check if tanks are empty or not
		bool emptyMed() const;
		bool emptyLow() const;
		double salePriceHigh(int gal);//evaluate cost of gas and total cost
		double salePriceMed(int gal);
		double salePriceLow(int gal);
		double earnedHigh();//return current total earned 
		double earnedMed();
		double earnedLow();
		void display(ostream& out)const;//show current money information.
	private: 
		int highOctane;//quantity if each octanes in the pump
		int medOctane;
		int lowOctane;
		double priceHigh;//price/gallons for each octanes
		double priceMed;
		double priceLow;
		double totalHigh;//track total cash earned from each octane 
		double totalMed;
		double totalLow; 
		

};

