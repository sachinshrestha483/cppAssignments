#include<iostream>  
#include <cstring>
using namespace std; 
  
int main() 
{ 
char a;
char vowels[5]={'A','E','I','O','U'};
bool isVowel;
 cout<<"Enter Char To CheckWhether It is Vowel Or Consonant:";
 cin>>a;
a= toupper(a);
for(int i=0;i<=5;i++)
{
	if(a==vowels[i])
	{
		cout<<a<<" is a Vowel";
		isVowel=true;
		break;
	}
}
if(isVowel==false)
{
	cout<<a<<" is Not a Vowel";
}
 

    return 0; 
} 
