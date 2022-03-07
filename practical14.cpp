 #include<iostream>
#include<fstream>
using namespace std;

//QUES 14 - COPY THE CONTENTS OF ONE  TEXT FILE TO ANOTHER FILE, AFTER REMOVING ALL THE WHITESPACES. 
// define a structure to store student data
struct student
{
   int roll;
   char name[30];
   int standard;
   int year;
   float marks;
public:
   student() { }
   void displayData(); // display data
};
 
 void student :: displayData() 
 {
 cout<<" "<<roll<<"\t\t"<<name<<"\t\t"<<marks<<"\n\n";
}
 
 int main()
 { student s[10]; // array of 10 student objects
   fstream file;
   int i;
 
 file.open("record.txt", ios :: in); // open file for reading
   cout << "\nReading Student information from the file :- " << endl;
   
   cout << "\n\nRoll No.\tName\t\tMarks(out of 500)\n\n";
 
   for (i = 0; i < 10; i++)
    {
      // read an object from a file
      file.read((char *)&s[i], sizeof(s[i]));
      s[i].displayData();
    }
 
   file.close(); // close the file
   return 0;
}
