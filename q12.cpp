#include<iostream>
using namespace std;

int main()
{
    int a=10,b=5,t;
    cout<<"Before Swap: "<<a<<" "<<b<<endl;
    t=b;
    b=a;;
    a=t;
    cout<<"After Swap: "<<a<<" "<<b<<endl;

    return 0;



}
