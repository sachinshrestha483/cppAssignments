#include<iostream>  
  
using namespace std; 
  
int main() 
{ 
int a,b;
cout<<"Enter First Number:";
cin>>a;
cout<<"Enter Second Number:";
cin>>b;
if(a>b)
{
	cout<<a<<" Is Greater Than "<<b;
}
else if(a<b)
{
	cout<<b<<" is Greater Than "<<a;
}
      
else
{
 cout<<a<<" is Equal To "<<b;	
}      
    return 0; 
} 
