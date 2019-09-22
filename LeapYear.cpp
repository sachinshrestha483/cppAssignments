#include<iostream>  
  
using namespace std; 
  
int main() 
{ 
 int year;
 cout<<"Enter Year To Check Whether It Is Leap Year Or Not:";
 cin>>year;
 if(year%4==0)
 {
 	if(year%100==0)
	 {
 		if(year%400==0){
 				cout<<year<<" is leap year";
		 }
		 else
		 {
		   	cout<<year<<" is not a leap year";	
		 }
	 }
	else
	{
		cout<<year<<" is a leap year";
	}
 }   
 else
 {
 	cout<<year<<" is  not a leap year";
 }   
    return 0; 
} 
