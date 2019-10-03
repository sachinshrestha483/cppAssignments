#include<iostream>  
  
using namespace std; 
  
void MaxNumber(int a, int b,int c)
{
	if(a>b&&a>c)
	{
	   cout<<"Max Number is :"<<a;
	}
	else if(b>a&&b>c)
	{
		cout<<"Max Number Is:"<<b;
		
	}
	else if(c>a&&c>b)
	{
		cout<<"Max Number is:"<<c;
	}
	else
	{
		cout<<"All Number are Equal";
	}
}
	

int main() 
{ 
int a,b,c;
cout<<"Enter First Number:";
cin>>a;
cout<<"Enter Second Number:";
cin>>b;
cout<<"Enter Third Number:";
cin>>c;
MaxNumber(a,b,c);
      
    return 0; 
} 
