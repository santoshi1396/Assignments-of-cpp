//Write a program in C++ to find the area of Scalene Triangle.

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float s1,s2,a,area;

    cout<<"Enter the value of side1: "<<endl;
    cin>>s1;
    cout<<"Enter the value of side2: "<<endl;
    cin>>s2;

    cout<<"Enter the angle between 2 sides: "<<endl;
    cin>>a;

    area=(s1*s2 * sin(3.14159/180)*a)/2;
    cout<<"Area of Scalene Triangle: "<<area<<endl;


    return 0;
}
