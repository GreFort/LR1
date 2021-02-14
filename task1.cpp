#include <iostream>
using namespace std;
int main()
{
    int x = 16;
    double f;
    cout << "Const = " << x;
    f = -1 * sqrt(x);
    cout << "\nIf x = " << x << " f = " << f;
    cout << "\nEnter x = ";
    cin >> x;
    if (x < 0)
    {
        cout << "If x = " << x << " Error, x < 0" << "\n";
    }
    else
    {
        f = -1 * sqrt(x);
        cout << "If x = " << x << " f = " << f << "\n";
    }
}

