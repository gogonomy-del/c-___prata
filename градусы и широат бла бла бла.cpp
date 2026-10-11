#include <iostream>

using namespace std;

int main()
{
    const double minuts_in_degrees = 60;
    const double seconds_in_degrees = 3600;

    cout << "Enter а latitude in degrees , minutes, and seconds :" << endl;
    cout << "First, enter the degree s : ";
    double degrees;
    cin >> degrees;
    cout << "Next , enter the minutes of arc :" << endl;
    double minutes_of_arcs;
    cin >> minutes_of_arcs;
    cout << "Finally, enter the seconds of arc :" << endl;
    double seconds_of_arcs;
    cin >> seconds_of_arcs;

    cout << degrees << " degree, " << minutes_of_arcs << " minutes, " << seconds_of_arcs << " seconds = " << degrees + (minutes_of_arcs / minuts_in_degrees) + (seconds_of_arcs / seconds_in_degrees) << " degrees";
}
