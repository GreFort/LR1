#include <iostream>
using namespace std;
void Function();
extern double x, f;
void main()
{
    cout << "Constant = " << x;
    Function();
    cout << "If x = " << x << ", Function = " << f << "\nEnter x = ";
    cin >> x;
    if (x < 0)
    {
        cout << "If x = " << x << ", Error x<0\n";
    }
    else
    {
        Function();
        cout << "If x = " << x << ", Function = " << f << "\n";
    }
}
