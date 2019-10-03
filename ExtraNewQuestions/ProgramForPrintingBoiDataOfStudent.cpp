#include<iostream>  
  
using namespace std; 
class Student
{
	int examNo;
	char name[20];
	float marks;
	
	public:
		void GetName()
		{
			cout<<"Enter Examination Number:";
			cin>>examNo;
			cout<<"Enter Name:";
			cin>>name;
			cout<<"Enter Marks:";
			cin>>marks;
		}
		void Display()
		{
			
		    cout<<"---Detail Of Student---"<<endl;
			cout<<"Examination Number:"<<examNo<<endl;
			cout<<"Student Name:"<<name<<endl;
			cout<<"Student Marks:"<<marks<<endl;
		}
};
int main() 
{ 
int n,i;
i=0;

cout<<"Enter Number Of Students:";
cin>>n;
Student s[n];


while(i<n)
{
s[i].GetName();
   
i++;	
}
i=0;

while(i<n)
{

s[i].Display();     
i++;	
}
return 0; 
} 
