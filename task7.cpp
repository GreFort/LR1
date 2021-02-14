#include <iostream>
#include "func.h"
using namespace std;
void main()
{
    cout << "Constant = " << x;
    Function();
    cout << "\nIf x = " << x << ", Function = " << result << "\nEnter x = ";
    cin >> x;
    Function();
    if (x < 0)
    {
        cout << "If x = " << x << ", Error x<0\n";
    }
    else
    {
        cout << "If x = " << x << ", Function = " << result << "\n";
    }
}