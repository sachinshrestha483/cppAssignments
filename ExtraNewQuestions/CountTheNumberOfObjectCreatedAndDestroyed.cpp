#include<iostream>  
  
using namespace std; 

class Test
{
	static int count;
public:
     Test()
	  {
	  	count++;
	  	
	  	cout<<"Number Of Objects"<<count<<endl;
	  	
	 	
	  }
	  ~Test()
	  {
	  	count--;
	  	
	  	cout<<"Number Of Objects"<<count<<endl;
	  }	
};
int Test::count=0;
int main() 
{ 

   Test a,b,c;
    return 0; 
} 
