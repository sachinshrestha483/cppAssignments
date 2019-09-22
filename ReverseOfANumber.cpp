#include <iostream>  
using namespace std;  
int main()  
{  
int n, reverse=0, remiander;    
cout<<"Enter a number: ";    
cin>>n;    
  while(n!=0)    
  {    
     remiander=n%10;      
     reverse=reverse*10+remiander;    
     n/=10;    
  }    
 cout<<"Reversed Number: "<<reverse<<endl;     
return 0;  
}  
