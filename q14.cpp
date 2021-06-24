#include<iostream>
using namespace std;

int main()
{
    int r;
    float vol;

    cout<<"Calculate the volume of a sphere :"<<endl;
    cout<<"Input the radius of a sphere :"<<endl;
    cin>>r;

    vol=(4*3.14*r*r*r)/3;
    cout<<"Volume of sphere: "<<vol;


return 0;
}
