#include<iostream>  
#include<string>  

using namespace std; 

class Student
{
 string Name;
 string Address;
 int Phone;
 int Standard;
 int Age;
 string FatherName;
 string MotherName;
 public:
 Student()
 {
 	string name;
 	string address;
 	int phone;
 	int standard;
 	string fatherName;
 	string motherName;
 	int age;
 	cout<<"Enter Students Name:";
 	cin>>name;
 	
 	cout<<"Enter Students Age";
 	cin>>age;
 	
	 cout<<"Enter Students Address:";
 	cin>>address;
 	
 	cout<<"Enter Students Phone:";
 	cin>>phone;
 	
 	cout<<"Enter Students Class:";
 	cin>>standard;
 	
 	cout<<"Enter Students Father Name:";
 	cin>>fatherName;
 	
    cout<<"Enter Students Mother Name:";
 	cin>>motherName;
 	
    Name=name;
  Address=age;
  Phone=phone;
  Standard=standard;
  Age=age;
  FatherName=fatherName;
  MotherName=motherName;
 	

 }
public:
 void Details()
 {
 	cout<<"Students Name:"<<Name;
 		
 	cout<<" Students Age"<<Age;
 	
	 cout<<" Students Address:"<<Address;
 	
 	cout<<"Students Phone:"<<Phone;
 	
 	cout<<" Students Class:"<<Standard;
 		
 	cout<<" Students Father Name:"<<FatherName;
 	
    cout<<" Students Mother Name:"<<MotherName;
 	
 }
 
};
  
int main() 
{ 
 Student A ;
 A.	Details();
 
      
    return 0; 
} 
