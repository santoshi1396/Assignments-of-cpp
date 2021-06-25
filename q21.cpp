//Write a program in C++ to find the temperature in Fahrenheit to Celsius.
#include<iostream>
using namespace std;

double fahrenttocelcius()
{
    float f,c;
    cout<<"Convert temperature in  Fahrenheit to Celsius : "<<endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<"Input the temperature in Fahrenheit : "<<endl;
    cin>>f;

    cout<<"The temperature in Fahrenheit : "<<f<<endl;

    c = (f - 32.0) * 5.0 / 9.0;

    cout<<"The temperature in Celsius : "<<c<<endl;
}
int main()
{

fahrenttocelcius();

return 0;
}
