#include<iostream>  
  
using namespace std; 
  
int main() 
{ 
int a,b;
 cout<<"Enter First Number:";
 cin>>a;
 cout<<"Enter Second Number:";
 cin>>b;
 cout<<"Number Before Swapping"<<endl;
 cout<<"a:"<<a<<endl;
 cout<<"b:"<<b<<endl;
 
 a=a+b;
 b=a-b;
 a=a-b;
 cout<<"Number Before Swapping"<<endl;
 cout<<"a:"<<a<<endl;
 cout<<"b:"<<b<<endl;
 
 
      
    return 0; 
} 
