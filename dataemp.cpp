//Write a program in C++ to check whether the primitive values crossing the limits or not.
//Check whether the primitive values crossing the limits or not
#include<iostream>
using namespace std;

int main()
{
    char gender ='F';
    bool isMarried = true;
    int noofsons =2;
    short yearofAppt = 2009;
   unsigned int YearlyPackage = 1500000;
   double height = 79.48;
   float gpa = 4.69f;
   long totalDrawn = 12047235L;
   long  balance = 995324987LL;

   cout << " The Gender is : " << gender << endl;
   cout << " Is she married? : " << isMarried << endl;
   cout << " Number of sons she has : " << noofsons << endl;
   cout << " Year of her appointment : " << yearofAppt << endl;
   cout << " Salary for a year : " << YearlyPackage << endl;
   cout << " Height is : " << height << endl;
   cout << " GPA is " << gpa << endl;
   cout << " Salary drawn upto : " << totalDrawn << endl;
   cout << " Balance till : " << balance << endl;
   return 0;

}
