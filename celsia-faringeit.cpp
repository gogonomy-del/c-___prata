
#include <iostream>

using namespace std;

float faring(float c);

int main()
{
    cout << "Please enter а Celsius value : ";
    float c;
    cin >> c;
    float f = faring(c);
    cout << c << " degrees Celsius is " << f << " degrees Fahrenheit .";
}

float faring(float c) {
    return (1.8 * c) + 32;
}