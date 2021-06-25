#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float n1,n2,n3,n4,total,avg;

    cout<<"Enter 1st two numbers:  "<<endl;
    cin>>n1>>n2;

    cout<<"Enter 2nd two numbers:  "<<endl;
    cin>>n3>>n4;

    total=n1+n2+n3+n4;
    cout<<"The total of four numbers is : "<<total<<endl;

    avg=total/4;
    cout<<"The average of four numbers is : "<<avg;
return 0;
}
