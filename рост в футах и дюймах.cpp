
#include <iostream>

using namespace std;

int fyt(int hieght);
int duim(int hieght);

int main()
{
	cout << "Enter your hieght in fyts: _";
	int hieght;
	cin >> hieght;
	int n = fyt(hieght);
	int m = duim(hieght);
	cout << "hieght: " << n << "'" << m << " duims.";
}

int fyt(int hieght) {
	const int FEET_IN_INCH = 12;
	int resultf = hieght / FEET_IN_INCH;
	return resultf;
}

int duim(int hieght) {
	const int FEET_IN_INCH = 12;
	int answer = hieght % FEET_IN_INCH;
	return answer;
}