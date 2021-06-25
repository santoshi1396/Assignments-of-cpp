//Write a program in C++ to convert temperature in Kelvin to Celsius.
#include<iostream>
using namespace std;

int main()
{
float c,k;
    cout<<"Convert temperature in Kelvin to Celsius : "<<endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<"Input the temperature in Kelvin : "<<endl;
    cin>>k;

    cout<<"The temperature in Kelvin : "<<k<<endl;

    c=k-273.15;
    cout<<"The temperature in Celsius : "<<c<<endl;
    return 0;
}
