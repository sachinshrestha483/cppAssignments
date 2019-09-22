#include<iostream>  
  
using namespace std; 
  
int main() 
{ 
int a,b;
char operation;
cout<<"Enter First Number:";
cin>>a;
cout<<"Enter Second Number:";
cin>>b;
cout<<"Enter The Operation:";
cin>>operation;
switch(operation)
{
	case '+':
		cout<<"The Sum Is :"<<a+b;
		break;
	case '-':
		cout<<"The Subtraction Is :"<<a-b;
		break;
	case '*':
		cout<<"The Multiplication  Is :"<<a*b;
		break;
	case '/':
		cout<<"The Division Is :"<<a/b;
		break;
	default:
	    cout<<"Enter Correct Operation";		
}

      
    return 0; 
} 
