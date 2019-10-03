#include<iostream>  
  
using namespace std; 
class student
{
	int roll;
	char name[20];
	
	public :
		void getdata()
		{
			cout<<"\n Enter The Student Roll No:";
			cin>>roll;
			cout<<"\n Enter The Student Name:";
			cin>>name;
		}
		void Display()
		{
			cout<<"\n Roll No:"<<roll;
			
			cout<<"\n Name:"<<name;
			
		}
};
class Sport
{
	int sportMarks;
	public:
		void GetSportsMarks()
		{
			cout<<"\n Enter The Sports Marks:";
			cin>>sportMarks;
			
		}
		void ShowSportMarks()
		{
			cout<<"\n Sports Marks Is :"<<sportMarks;
		}
		
};
	class Marks:public student,Sport//Single Inheritance
	{
		int sub1,sub2,sub3;
		public:
			Marks()
			{
				
				InputMarks();
			    GetSportsMarks();
				DisplayMarks();

				ShowSportMarks();
				
			}
			void InputMarks()
			{
				getdata();
				cout<<"\n Enter The Marks Of Subject 1:";
				cin>>sub1;
				cout<<"\n Enter The Marks Of Subject 2:";
				cin>>sub2;
				cout<<"\n Enter The Marks Of Subject 3:";
				cin>>sub3;
			}
			void DisplayMarks()
			{
				Display();
				cout<<"\n Marks1 :"<<sub1;
				cout<<"\n Marks2:"<<sub2;
				cout<<"\n Marks3:"<<sub3;
			}
		
	};	
	

int main() 
{ 

    Marks m1;

      
    return 0; 
} 
