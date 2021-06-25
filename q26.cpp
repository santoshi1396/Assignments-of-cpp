//Write a program in C++ to convert temperature in Fahrenheit to Kelvin.

#include<iostream>
using namespace std;

int main()
{
float f,k;
    cout<<"Convert temperature in Fahrenheit to Kelvin : "<<endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<"Input the temperature in Fahrenheit : "<<endl;
    cin>>f;

    cout<<"The temperature in Fahrenheit : "<<f<<endl;

    k = (5.0 / 9) * (f - 32) + 273.15;
    cout<<"The temperature in Kelvin : "<<k<<endl;
    return 0;
}








