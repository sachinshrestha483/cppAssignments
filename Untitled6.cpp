#include<iostream> 
#define MAXSIZE 3
using namespace std; 

class Stack{
	int top;
	int array[MAXSIZE];
	public:
		Stack()
		{
			top=0;
		}
		
		
		void Push(int a)
		{
			
			if(top==MAXSIZE)
			{
				cout<<"Stack Overflow"<<endl ;
				return ;
			}
			
			
				array[top]=a;
				top++;
		}
		
		
		void Pop()
		{
			if(top==0)
			{
				cout<<"Stack Underflow"<<endl;
				return ;
			}
			cout<<"Popped:"<<array[top-1];
			top--;
		}
		
		
		void Show()
		{
		   int x=top-1;
		   cout<<"Elements of Stack Are"<<endl;
		   while(x>=0)
		   {
		   	
		   	cout<<array[x]<<endl;
		   	x--;
		   }
		}
		
		
		
		void Top()
		{
			if(top==0)
			{
				cout<<"Stack Is Empty "<<endl;
				return ;
				
			}
			cout<<"Top Element is:"<<array[top-1]<<endl;
		}
		void Size()
		{
			cout<<"Number Of Elements in Stack is:"<<top<<endl;
		}
		
		void IsEmptyStack()
		{
			if(top==0)
			{
				cout<<"Stack is Empty"<<endl;
				return ;
			}
			cout<<"Stack is Not Empty"<<endl;
		}
		
		
		void IsFullSize()
		{
			if(top==MAXSIZE+1)
			{
				cout<<endl<<"Stack is Full";
				return ;
			}
			cout<<"Stack Is Not Full"<<endl;
		}
		
		int IsFull()
		{
			if(top==MAXSIZE)
			{
			
				return 1 ;
			}
			return 0;
		}
		
};

		int main() 
		{ 
			Stack a;
		int select;
		int enter;
		bool run=true;
		  cout<<"This Is Stack";
		  cout<<"Operations Are"<<endl;
		  cout<<"Enter 1 For Push"<<endl;
		  cout<<"Enter 2 For Pop"<<endl;
		  cout<<"Enter 3  For  Showing The Stack Elements"<<endl;
		  cout<<"Enter 4 For Checking Whether Stack Is Empty Or Not"<<endl;
		  cout<<"Enter 5  For Displaying The top Element in Stack"<<endl;
		  
		 cout<<"Ente 6 For Print The Number Of Elements in Stack"<<endl;
		 cout<<"Enter 7 For Checking Whether The Stack Is Full Or Not"<<endl;
		 cout<<"Enter 8 to Exit The Stack"<<endl;
		 while(run==true)
		 {
		 
		  cout<<"Entered Desired Option:";
		  cin>>enter;
		  
		  
		  switch(enter)
		  {
		  	case 1:
		  		if(a.IsFull()==1)
		  		{
				 cout<<"stack Overflow"<<endl;  
				   continue;
				}
			  	cout<<"Enter Element To Push:";
		  		cin>>select;
		  		a.Push(select);
		  		a.Show();
		  	
		  		break;
		  		
		  	case 2:
			    a.Pop();
				cout<<endl;	
		  		break;
		  	case 3:
			    a.Show();
				break;
			case 4:
			     a.IsEmptyStack();
				 break;
			case 5:
			    a.Top();	 		
		  		break;
		  	case 6:
			     a.Size();
			     break;
			case 7:
			      a.IsFullSize();
			      break;
			case 8:
			      run=false;
			      break;      
			default:
			    cout<<"Select Valid Input"<<endl;	  	 	
		  }
		
	}
		
		
	
			return 0; 
		} 
 
 
 
 
 
 
