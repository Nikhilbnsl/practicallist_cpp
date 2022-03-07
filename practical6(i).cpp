 #include<iostream>
using namespace std; 

//QUES 6 - Write program to each a given element in a set of N numbers using Binary search: 
//(i) with recursion.
int binarySearch(int a[],int l,int h, int n)
{
if(l<=h)
{
int m=(l+h)/2;
if(a[m]==n)
{
    return m;
    
}
else if(a[m] <n)
{
    return binarySearch(a,m+1,h,n);
    
}
else
{
    return binarySearch(a,l,m-1,n);
}
}
return -1;
}
int main()
{
    int a[]={1,3,5,8,10};
    int n=5,l,h,m, index;
    l=0;
    h=(sizeof(a)/sizeof(a[0]))-1;
    index= binarySearch(a,l,h,n);
    if(index==-1)
    {
        cout<<"Number not found. "<<endl;
    }
    else
    {
        cout<<"Number found at index: "<<index<<endl;
        
    }
    return 0;
}

