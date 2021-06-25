//Write a program in C++ to find the temperature in Celsius to Fahrenheit.
#include<iostream>
using namespace std;

int main()
{
    float f,c;
    cout<<"Convert temperature in Celsius to Fahrenheit: "<<endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<"Input the temperature in Celsius : "<<endl;
    cin>>c;

    cout<<"The temperature in Celsius : "<<c<<endl;

    f = (c * 9.0) / 5.0 + 32;
    cout<<"The temperature in Fahrenheit : "<<f<<endl;

return 0;
}
