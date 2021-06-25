//Write a program in C++ to find the third angle of a triangle.
#include<iostream>
using namespace std;

int main()
{
    int a1,a2,a3;
    cout<<"Enter 1st angle of a triangle: "<<endl;
    cin>>a1;
    cout<<"Enter 2nd angle of a triangle: "<<endl;
    cin>>a2;

    a3=180-(a1+a2);
    cout<<"Third angle of a triangle: "<<a3<<endl;

return 0;
}
