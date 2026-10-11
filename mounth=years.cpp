
#include <iostream>

using namespace std;

int mounth(int n);

int main()
{
    int n;
    cin >> n;
    int f = mounth(n);
    cout << f;
}

int mounth(int n) {
    int m;
    m = 12 * n;
    return m;
}