#include<iostream>
using namespace std;

class MatrixArithmetic
{
private:
 int order;
 int** array1;
 int** array2;
 int**array3;
 public:
 	void InsertValues()
 	{
 		cout<<"Enter Order Of Matrix:";
 		cin>>order;
 		array1=new int*[order];
 		array2=new int*[order];
 		array3=new int*[order];
 		for(int i = 0; i < order; ++i)
		{
				array1[i] = new int[order];
			    array2[i] = new int[order];
			    array3[i]=new int[order];
	    }

 	    cout<<"Insertion For Array 1 \n";
        for(int i=0;i<order;i++ )
        {
  	      for(int j=0;j<order;j++)
  	      {
  	    cout<<"enter value for Index "<<i<<","<<j<<":";
  	    cin>>array1[i][j];
  	      }
       }

        cout<<"Insertion For Array 2 \n";
        for(int i=0;i<order;i++ )
        {
  	      for(int j=0;j<order;j++)
  	      {
  	    cout<<"enter value for Index "<<i<<","<<j<<":";
  	    cin>>array2[i][j];
  	      }
       }
 		
	}
	
	void Add()
	{
		cout<<"Addition of Matrix"<<endl;
	    for(int i=0;i<order;i++)
        {
		  	for(int j=0;j<order;j++)
		  	{
		  		array3[i][j]=array1[i][j]+array2[i][j];
			}
        }
	}
	
	void Subtract()
	{
		cout<<"Subtraction of Matrix"<<endl;
	    for(int i=0;i<order;i++)
        {
		  	for(int j=0;j<order;j++)
		  	{
		  		array3[i][j]=array1[i][j]-array2[i][j];
			}
        }
	}
	
	void Display()
	{
		for(int i=0;i<order;i++)
        {
			  	for(int j=0;j<order;j++)
			  	{
			  		cout<<array3[i][j];
			  		cout<<" ";
				}
	            cout<<endl;
		}
  
	}
	
	void Deallocate()
	{
		int i;
		for(i=0;i<order;i++)
		{
			delete array1[i];
			delete array2[i];
			delete array3[i];
		
			
		}
			cout<<"Memory Deallocated Sucessfully";
	}
};

int main()
{
		MatrixArithmetic m;
		m.InsertValues();
		m.Add();
		m.Display();
	    m.Subtract();
		m.Display();
		m.Deallocate();
		return 0;
}

