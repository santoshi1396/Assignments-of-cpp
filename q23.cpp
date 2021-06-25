//Write a program in C++ that converts kilometers per hour to miles per hour.
#include<iostream>
using namespace std;

int main()
{
    float kmph,mph;
    cout<<"Input the distance in kilometer "<<endl;
    cin>>kmph;

    mph = (kmph * 0.6213712);

    cout<<"The "<< kmph <<" Km./hr. means "<< mph << " Miles/hr." << endl;
return 0;
}
