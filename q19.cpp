//Write a program in C++ to find the area and circumference of a circle.
#include<iostream>
using namespace std;

int main()
{
    double r,c,a;
    cout<<"Input the radius(1/2 of diameter) of a circle : "<<endl;
    cin>>r;

    a=3.14159*r*r;
    cout<<"Area of a circle is: "<<a<<endl;

    c=2*3.14159*r;
    cout<<"Circumference of a circle is: "<<c;

    return 0;


}
