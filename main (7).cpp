#include<iostream>
#include<conio.h>
using namespace std;

class student 
{
         int age;
         char name[20];
         char address[20];

public:void read () 
  {
    
         cout << "\n enter the age :";
         cin >> age;
         cout << "\n enter the name :";
         cin >> name;
         cout << "\n enter the address :";
         cin >> address;
  
   } 

void display () 
  {
    
         cout << "\n\n AGE =" << age;
         cout << "\n NAME = " << name;
         cout << "\n ADDRESS =" << address;
  
  } 
 
int getage () 
   {
    
         return age;
  
   }

};


int main () 
{
  
         student obj[10];
         int n;
         cout << "enter the number of students :";
         cin >> n;
  
 
for(int i = 0; i < n; i++)
    
    {
      
         cout << "\n enter the details of student " << i + 1;
         obj[i].read ();
    
    } 
 
int totalage = 0;
  
 
       for (int i = 0; i < n; i++)
    
           {
      
                totalage += obj[i].getage ();
    
           } 
 
int average = totalage / n;
  
for (int i = 0; i < n; i++)
    
  {
       if (obj[i].getage () > average)
	
	     {
	         cout<<"\n details of student  "<<i+1;
             obj[i].display ();
	         
         }
   }

}
