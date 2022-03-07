#include<iostream>
using namespace std;
 
 //QUES 2 WAP to remove the duplicates from an array.
int main()
{
int a[30];
int i,j,n=5,k;
cout<<"Enter elements of an array: ";
for(i=0;i<n;++i)
cin>>a[i];
for(i=0;i<n;++i)
{
for(j=i+1;j<n;)
{
if (a[i]==a[j])
{
for(k=j;k<n;++k)
{
a[k]=a[k+1];
}
--n;
}
else
++j;
}
}
cout<<"Resultant array without duplicants: ";
for(i=0;i<n;++i)
{
cout<<a[i]<<" ";
}
return 0;
}

