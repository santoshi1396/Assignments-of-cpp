//Write a program in C++ to convert temperature in Celsius to Kelvin.
#include<iostream>
using namespace std;

int main()
{
float c,k;
    cout<<"Convert temperature in Celsius to Kelvin : "<<endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<"Input the temperature in Celsius : "<<endl;
    cin>>c;

    cout<<"The temperature in Celsius : "<<c<<endl;

    k = c + 273.15;
    cout<<"The temperature in Kelvin : "<<k<<endl;
    return 0;
}
