//Write a program in C++ to find the Area and Perimeter of a Rectangle.
#include<iostream>
using namespace std;

int main()
{
    int l,w;
    float area, perimeter;
    cout<<"Enter the value of length: "<<endl;
    cin>>l;
    cout<<"Enter the value of width: "<<endl;
    cin>>w;

    area=l*w;
    cout<<"Area of a rectangle: "<<area<<endl;

    perimeter=2*l+2*w;
    cout<<"Perimeter of rectangle is: "<<perimeter<<endl;


    return 0;


}
