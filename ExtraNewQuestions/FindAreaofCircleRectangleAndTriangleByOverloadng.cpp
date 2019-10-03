#include<iostream>  
  
using namespace std; 
int x,y,z;
void Area(int radius)
{
  cout<<"Area of Circle is:"<<3.14*radius*radius;	
}
void Area(int length,int breadth)
{
	cout<<"Area Of Rectangle:"<<length*breadth;
}
void Area(double half, int base, int height)
{
	cout<<"Area Of Traingle Is:"<<half*base*height;
}  
  
int main() 
{ 
   int choice;
   int i=0;

  cout<<"Enter 1 For Area of Circle \nEnter 2 For Area Of Rectangle \nEnter 3 for Area Of Triangle"<<endl;
while(i<3)
{

 cout<<"Enter Your choice:";
 cin>>choice;
 
  
 switch(choice)
{
case 1:
       cout<<"Enter Radius Of Circle:";
	   cin>>x;
	   Area(x);
	   	break;
case 2:
       cout<<"Enter length Of Rectangle:";
	   cin>>x;
	   cout<<"Enter Breadth Of Rectangle:";
	   cin>>y;
	   Area(x,y);
	   break;
case 3:
       cout<<"Enter Base Of Triangle:";
	   cin>>x;
	   cout<<"Enter Height Of Triangle:";
	   cin>>y;
	   Area(0.5,x,y);
	   break;	   
default:
       cout<<"Enter Valid Input!";	   	   	
	   	
}
i++;
cout<<endl;   
}
    return 0; 
} 

