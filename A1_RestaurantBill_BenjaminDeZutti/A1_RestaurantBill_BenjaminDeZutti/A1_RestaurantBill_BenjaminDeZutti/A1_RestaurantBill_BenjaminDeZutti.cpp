// Program will compute the tax and tip for a patron
#include <iostream>
using namespace std;
int main()
{
	//Variable Definitions
	double mealOriginalCost = 88.67;

	//Defining NAMED CONSTANTS

	const double foodTax = 0.0675;
	const double foodTip = 0.2;

	//Calculations
	double mealTax = mealOriginalCost * foodTax;
	double mealTip = (mealOriginalCost + mealTax) * foodTip;
	double mealTotal = mealOriginalCost + mealTip + mealTax;

	//Displaying on the ouput screen
	cout << "Meal: " << mealOriginalCost << endl;
	cout << "Tax: " << mealTax << endl;
	cout << "Tip: " << mealTip << endl;
	cout << "Total: " << mealTotal << endl;
	return 0;
}