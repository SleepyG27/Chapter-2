#include <iostream>
#include <iomanip>
using namespace std;


int main() {

	double OriginalPrice, MarkupPercentage, SalesTaxRate;

	MarkupPercentage = 0.60;
	SalesTaxRate = 5.25;

	cout << "Enter the original price of the item: ";
	cin >> OriginalPrice;

	double SalePrice = OriginalPrice + (OriginalPrice * MarkupPercentage);
	double Tax = (SalePrice * SalesTaxRate) / 100;
	double TotalPrice = SalePrice + Tax;

	cout << "The original price of the item is: $" << fixed << setprecision(2) << OriginalPrice << endl;
	cout << "The percentage of the mark-up is: 60% "<< endl;
	cout << "The sales tax rate is: " << fixed << setprecision(2) << SalesTaxRate << "%" << endl;
	cout << "The sale price of the item is: $" << fixed << setprecision(2) << SalePrice << endl;
	cout << "The sales tax is: $" << Tax << endl;
	cout << "The total price of the item is: $" << fixed << setprecision(2) << TotalPrice << endl;

	return 0;
}