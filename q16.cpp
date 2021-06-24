//Write a program in C++ to calculate the volume of a cylinder.
#include<iostream>
using namespace std;

int main()
{
    int r,h;
    float vol;
    cout<<"Enter the value radius of the cylinder : "<<endl;
    cin>>r;
    cout<<"Enter the height of the cylinder:  "<<endl;
    cin>>h;

    vol=3.14*r*r*h;
    cout<<"Volume of Cylinder is: "<<vol<<endl;


    return 0;
}
