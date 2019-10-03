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
  cout<<"Constructing  Objects\n\n";
   Test a,b,c;
   cout<<"\nDestroying Objects\n\n";
    return 0; 
} 
