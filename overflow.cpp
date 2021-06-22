//Write a program in C++ to check overflow/underflow during various arithmetical operation.
#include<iostream>
using namespace std;

int main()
{
    cout << "\n Check overflow/underflow during various arithmetical operation :"<<endl;
    cout << " Range of int is [-2147483648, 2147483647]"<< endl;

    int m=2147483647;
    cout<<"Overflow the integer range and set in minimum range : "<<m+1<<endl;
    cout<<"Increasing from its minimum range: "<<m+2<<endl;

    cout <<" Product is :" << m * m << endl;

   int n = -2147483648;
   cout <<" Underflow the range and set in maximum range : " << n - 1 << endl;
   cout <<" Decreasing from its maximum range : " << n - 2 << endl;
   cout <<" Product is : " << n * n << endl;
   cout << endl;

   return 0;
}
