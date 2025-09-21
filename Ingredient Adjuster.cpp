//Ingredient Adjuster
//Adjusts ratios based on number of cookies wanted to make

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
//Base recipe
	const double sugar = 1.5; //cups
	const double butter = 1; //cups
	const double flour = 2.75; //cups
	const int baseCookies = 48; //cookies

	int desiredCookies; //number of cookies user wants to make
	cout << "Enter the number of cookies you want to make: ";
	cin >> desiredCookies;

	//Calculate the ratio
	double ratio = static_cast<double>(desiredCookies) / baseCookies;

	//Calculate adjusted ingredients
	double adjustedSugar = sugar * ratio;
	double adjustedButter = butter * ratio;
	double adjustedFlour = flour * ratio;

	//Output adjusted ingredients
	cout << fixed << setprecision(2);
	cout << "To make " << desiredCookies << " cookies, you will need:" << endl;
	cout << adjustedSugar << " cups of sugar" << endl;
	cout << adjustedButter << " cups of butter" << endl;
	cout << adjustedFlour << " cups of flour" << endl;

	return 0;

}