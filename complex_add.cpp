#include <iostream>
using namespace std;

class complex
{
public:
int real, imag;
void input()
    {
cout << "Enter real num: ";
cin >> real;
cout << "Enter imaginary num ";
cin >> imag;
    }
    
void add(complex c1,complex c2)
    {
real = c1.real + c2.real;
imag = c1.imag + c2.imag;
    }
    
void sub(complex c1, complex c2)
{
real = c1.real - c2.real;
imag = c1.imag - c2.imag;
}

 void display()
 {
cout<< real<<imag<<"i"<<endl;

  }
  
};

int main()
{
complex c1, c2, c3;
cout << "Enter first complex num:"<<endl;
c1.input();
cout << "Enter second complex num: "<<endl;
c2.input();
cout<<"Addition"<<endl;
c3.add(c1, c2);
c3.display();
cout<<"Subtraction"<<endl;
c3.sub(c1 , c2);
c3.display();

    return 0;
}

