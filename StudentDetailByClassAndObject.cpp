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
 	
 	cout<<"Enter Students Age:";
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
  Address=address;
  Phone=phone;
  Standard=standard;
  Age=age;
  FatherName=fatherName;
  MotherName=motherName;
 	

 }
public:
 void Details()
 {
 	cout<<endl;
 	cout<<"Students Details"<<endl;
 	cout<<"Students Name:"<<Name<<endl;
 		
 	cout<<" Students Age:"<<Age<<endl;
 	
	 cout<<" Students Address:"<<Address<<endl;
 	
 	cout<<"Students Phone:"<<Phone<<endl;
 	
 	cout<<" Students Class:"<<Standard<<endl;
 		
 	cout<<" Students Father Name:"<<FatherName<<endl;
 	
    cout<<" Students Mother Name:"<<MotherName<<endl;
 	
 }
 
};
  
int main() 
{ 
 Student A ;
 A.	Details();
 
      
    return 0; 
} 
