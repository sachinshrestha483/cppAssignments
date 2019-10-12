#include<iostream> 
using namespace std; 
  
class Complex { 
private: 
    int real, imag; 
public: 
    Complex(double r=0 , double i=0)  {real = (int)r;   imag = (int)i;} 
      
     
    Complex operator + (Complex obj) { 
         Complex res; 
         res.real = real + obj.real; 
         res.imag = imag + obj.imag; 
         return res; 
    } 
    void print() { cout << real << " + i" << imag << endl; } 
}; 
  
int main() 
{ 
    Complex c1(2, 8), c2(9, 4); 
    Complex c3 = c1 + c2;  
    c3.print();
	
	
}
