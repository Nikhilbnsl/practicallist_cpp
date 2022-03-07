#include <iostream>
using namespace std;

//QUES 7 - Write a program to calculate GCD of two numbers with recursion 
int gcd(int a,int b)
{
    if(a == 0 || b == 0)
    return 0;
    if (a>b)
    return gcd(a-b,b);
    return gcd(a,b-a);
}
int main() 
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"GCD of "<<a<<" and "<<b<<" is: "<<gcd(a,b);
    return 0;
}

