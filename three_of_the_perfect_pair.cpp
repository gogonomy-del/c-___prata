
#include <iostream>

using namespace std;

void f_1();
void f_2();

int main()
{
    f_1();
    f_1();
    f_2();
    f_2();

}

void f_1() {
    cout << "Three Blind mice" << endl;
}

void f_2() {
    cout << "See how they run" << endl;
}