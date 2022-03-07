#include<iostream>
using namespace std;

//without recurrsion
int main()
{
int a[]={2,4,6,7,8,9};
int n=9,l,h,m,mid;
l=0;
h=(sizeof(a)/ sizeof(a[0]))-1;
while(l<=h)
{
   m=l+h/2;
   if(a[m]==n)
   {
    break;
   }
  else if(a[m]<n)
  {
    l=m+1;  
  }
  else
  {
   h=m-1;
   }
}
cout<<"Number found at index: "<<m<<endl;
   return 0;
}

