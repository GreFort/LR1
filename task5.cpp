#include <iostream>
using namespace std;
double Function(double count);
void main()
{
    int x = 16;
    double f;
    cout << "Constant = " << x;
    f = Function(x);
    cout << "\nIf x = " << x << ", Function = " << f << "\nEnter x = ";
    cin >> x;
    if (x < 0)
    {
        cout << "If x = " << x << ", Error x<0\n";
    }
    else
    {
        f = Function(x);
        cout << "If x = " << x << ", Function = " << f << "\n";
    }
}