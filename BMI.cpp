
#include <iostream>

using namespace std;

int main()
{

	const int INCHES_PER_FOOT = 12;
	const double METERS_PER_INCH = 0.0254;
	const double KG_PER_POUND = 2.2;

	cout << "enter your hieght in feets:" << endl;
	int a1;
	cin >> a1;
	cout << "enter your hieght in inch: _" << endl;
	int b1;
	cin >> b1;
	cout << "enter your wieght in funts: _" << endl;
	int c1;
	cin >> c1;

	int b2;
	b2 = a1 * INCHES_PER_FOOT + b1;
	float hieght = b2 * METERS_PER_INCH;
	float weight = c1 / KG_PER_POUND;
	;
	float BMI = weight / (hieght * hieght);

	cout << "BMI: " << BMI << endl;
}
