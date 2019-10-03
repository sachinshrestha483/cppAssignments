#include<iostream>  
  
using namespace std; 
class Test
{
private:
      int a,b;
public:
  
	void GetData()
	{
		cout<<"Enter Value Of A:";
		cin>>a;
		cout<<"Enter Value Of B:";
		cin>>b;
	}
	void Display()
	{
		cout<<"\n a="<<a;
		cout<<"\n b="<<b;
	}
	friend void addition( Test t1 );
}; 
void addition(Test t1)
{   
	cout<<"\n Addition="<<t1.a+t1.b;
}
int main() 
{ 
   Test t1;
   t1.GetData();
   addition(t1);
     
      
    return 0; 
} 
