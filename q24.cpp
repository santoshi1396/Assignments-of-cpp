//Write a program in C++ to convert temperature in Kelvin to Fahrenheit.
#include<iostream>
using namespace std;

int main()
{
float f,k;
    cout<<"Convert temperature in Kelvin to Fahrenheit : "<<endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<"Input the temperature in Kelvin : "<<endl;
    cin>>k;

    cout<<"The temperature in Kelvin : "<<k<<endl;

    f = (9.0 / 5) * (k - 273.15) + 32;
    cout<<"The temperature in Fahrenheit : "<<f<<endl;
    return 0;
}
