#include<iostream>
#include<string.h>
using namespace std;

//QUES -3 Write a program that prints a table indicating the number of occurrences
//of each alphabet in the text entered as command line arguments.

int main(int argc, char *argv[])
{
    int i;
    int count=0;
    cout<<"Parameters are: ";
    for (int i=0;i<argc; i++)
    cout<<argv[i]<<" ";
    for(char k= 'a'; k<= 'z'; k++)
    {
        for(i=0; i<argc; i++)
        {
            for(int j=0; argv[i][j]!='\0';j++)
            {
                argv[i][j]=tolower(argv[i][j]);
                if(argv[i][j] ==k)
                count++;       
            }  
        }
        if (count>0)
        cout<<"\n"<<k<<" occurs "<<count<<" times.";
        count=0; 
    }
    cout<<"\nEnd of the table."<<endl;
    return 0;
}

