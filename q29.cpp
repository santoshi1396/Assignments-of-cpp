//Write a program in C++ to compute quotient and remainder.
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
int divisor,quotient,dividend,remainder;
    cout << "Enter dividend: ";
    cin >> dividend;

    cout << "Enter divisor: ";
    cin >> divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder;

return 0;
}
