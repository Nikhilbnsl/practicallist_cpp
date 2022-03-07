#include<iostream>
using namespace std;
//QUES 11. Write a program to read two numbers p and q.
// If q is 0 then throw an exception else display the result of p/q.

int main()
{
double a,b,quotient;
cout<<"Enter the numerator: ";
cin>>a;
cout<<"Enter the denominator: ";
cin>>b;
try
{
if(b==0)
throw "Attempt to divide by zero"; 
quotient=a/b;
cout<<"The quotient is: "<<quotient<<endl;
}
catch(const char* p)
{
cout<<p<<endl;
}
cout<<"\nEnd of the main function!!"<<endl;
return 0;
}

