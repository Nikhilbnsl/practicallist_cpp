#include <iostream>
#include<cstdlib>
#include<string.h>
#include<iomanip>
using namespace std;
/*QUES 4-Write a menu driven program to perform following operations on strings (without using inbuilt string functions):
 a) Show address of each character in string. 
b) Concatenate two strings.
 c) Compare two strings.
 d) Calculate length of the string (use pointers). 
e) Convert all lowercase characters to uppercase.
 f) Reverse the string.  */

void printaddress(char a[])
{
    void* p;
    for(int i=0;i<strlen(a);i++)
    {
        p= &a[i];
        cout<<"Character"<<setw(2)<<a[i]<<setw(9)<<" address is: "<<p<<endl;
        
    }
    
}
int length(char* p)
{
    int i=0;
    while(*p)
    {
        i++;
        p=p+1;
    }
    return i;
}
void concatenate(char* p, char* p1)
{
    while(*p!='\0')
    p++;
    while(*p1!='\0')
    {
        *p=*p1;
        p++;
        p1++;
    }
    *p='\0';
}
void relationalOperation(char s1[],char s2[])
{
 
}
 
void reverse(char p[])
{
    char temp;
    for(int i=0,j=length(p)-1;i<length(p)/2;i++,j--)
    {
        temp=p[i];
        p[i]=p[j];
        p[j]=temp;
    }
}
void case_changer(char s[])
{
    int i;
    for(i=0;i<strlen(s);i++)
    if(islower(s[i]))
    {
        s[i]=s[i]-32;
        
    }
    return;
}
int main()
{
    char s1[20],s2[20];
    int count,x1,p1,p2;
    cout<<"1. Input a string: "<<endl;
    cout<<"2. Print address of each character of the string: "<<endl;
    cout<<"3. Concatenation of two strings: "<<endl;
    cout<<"4. Comparison of two strings: "<<endl;
    cout<<"5. Length of string: "<<endl;
    cout<<"6. Conversion of all lowercase characters to uppercase : "<<endl;
    cout<<"7. Reverse the string: "<<endl;
    char ch='y';
    while(ch=='y')
    {
        cout<<"Enter your choice: ";
        cin>>x1;
        switch(x1)
        {
            case 1: cout<<"Enter the first string: ";
            cin>>s1;
            cout<<"Enter the second string: ";
            cin>>s2;
            break;
            case 2: printaddress(s1);
            printaddress(s2);
            break;
            case 3: concatenate(s1,s2);
            cout<<"Concatenation of two string are: "<<s1<<endl;
            break;
            case 4: relationalOperation(s1,s2);
            if(s1==s2)
            {
            cout<<s1<<" is equal to "<<s2<<endl;
            }
            else
            cout<<s1<<" is not equal to "<<s2<<endl;
            break;
            case 5: p1=length(s1);
            cout<<"Length of the first string is: "<<p1<<endl;
            p2=length(s2);
            cout<<"Length of the second string is: "<<p2<<endl;
            break;
            case 6: case_changer(s1);
            cout<<"Uppercase of the first string is: "<<s1<<endl;
            case_changer(s2);
            cout<<"Uppercase of the second string is: "<<s2<<endl;
            break;
            case 7: reverse(s1);
            cout<<"Reverse of the first string is: "<<s1<<endl;
            reverse(s2);
            cout<<"Reverse of the second string is: "<<s2<<endl;
            break;
            default: cout<<"Invalid choice!! "<<endl;
            
        }
        cout<<"Do you want to continue?"<<" ";
        cin>>ch;
        
    }
    return 0;
}

