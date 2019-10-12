#include<iostream>
 
using namespace std;
 
class CharStack
{
	private:
	char stackArray[5];
	protected:
		int top;
	public:
	   CharStack()
	   {
	   	top=0;
	   	
	   }	
	   virtual void Push(char value)
	   {
	   	if(top==5)
	   	{
	   		cout<<"Stack Overflow";
		}
		else
		{
			stackArray[top]=value;
		   	top++;
		}
	   	
	   }
	    virtual void Pop()
	   {
	   	if(top==0)
	   	{
	   		cout<<"Stack is Null";
		}
		else
		{
			
			cout<<"Popping Out:"<<stackArray[top-1]<<cout;
	   	    top--;
		}
	   	
	   }
	 virtual  void Display()
	   {
	   	for(int i=top-1;i>=0;i--)
	   	{
	   		cout<<stackArray[i];
	   		cout<<endl;
		}
	   }
	
} ;
class IntStack:public CharStack
{
   int stackArray[5];
   	public:
	   IntStack():CharStack()
	   {
	   	
	   	
	   }	
	   void Push(int value)
	   {
	   	if(top>=5)
	   	{
	   		cout<<"Stack Overflow";
		}
		else
		{
			
			stackArray[top]=value;
		   	top++;
		}
	   	
	   }
	   
	   void Pop()
	   {
	   	if(top==0)
	   	{
	   		cout<<"Stack is Null";
		}
		else{
			cout<<"Popping Out:"<<stackArray[top-1];
			cout<<endl;
	   	    top--;
		}
		
	}

	
	void Display()
	   {
	   	cout<<"Stack is"<<endl;
	   	for(int i=top-1;i>=0;i--)
	   	{
	   		cout<<stackArray[i];
	   		cout<<endl;
		}
	   }

	
};
int main()
{


IntStack intStack;
intStack.Push(12);
intStack.Push(11);
intStack.Push(10);

intStack.Push(9);
intStack.Pop();
intStack.Display();
return 0;
}
