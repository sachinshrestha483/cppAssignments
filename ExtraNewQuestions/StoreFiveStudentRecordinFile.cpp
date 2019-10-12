#include <iostream>
#include<fstream>
using namespace std;
class Student
{
	int rollNo;
	char name[40];
	float marks;
	public:
		void InputData()
		{
			cout<<"\n Enter Roll Number:";
			cin>>rollNo;
			cout<<"\n Enter Name:";
			cin>>name;
			cout<<"\n EnterMarks:";
			cin>>marks;
		}
		void ShowData()
		{
				cout<<"\n Enter Roll Number:"<<rollNo;
	            cout<<"\n Enter Name:"<<name;
				cout<<"\n EnterMarks:"<<marks;
			}
		void WriteFile()
		{
			ofstream student;
			student.open("student.dat",ios::app|ios::binary);
			student.write((char*)this,sizeof(*this));
		}	
		void ReadFile(int index)
		{
			ifstream readStudent;
			readStudent.open("student.dat");
			readStudent.seekg(index*sizeof(Student));
			readStudent.read((char*)this,sizeof(*this));
		    cout<<"Roll No:"<<rollNo<<endl<<"Name:"<<name<<endl<<"Marks:"<<marks;	
		}
};
int main() 
{
	int count=0;
     Student S1;
	while(count<5)
	{
	S1.InputData();
    S1.WriteFile();
  
	count++;	
	}
    cout<<endl<<"Record From BinaryFile"<<endl<<endl;
    for(int i=0;i<5;i++)
    {
       S1.ReadFile(i);	
       cout<<endl<<endl;

	}
	   
     

    
    
}
