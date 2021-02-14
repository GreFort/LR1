#include <iostream>
using namespace std;
int x = 16;
double f;
void Function()
{
    f = -1 * sqrt(x);
}
void main()
{
    cout << "Constant = " << x;
    Function();
    cout << "\nIf x = " << x << ", Function = " << f << "\nEnter x = ";
    cin >> x;
    if (x < 0)
    {
        cout << "\nIf x = " << x << ", Error x<0\n";
    }
    else
    {
        Function();
        cout << "If x = " << x << ", Function = " << f << "\n";
    }
}