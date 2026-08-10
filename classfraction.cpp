#include<iostream>
using namespace std;

class fraction
{
public:
int num , demo;
void input()
    {
cout << "Enter numerator: ";
cin >>num;
cout << "Enter denominator: ";
cin >>demo;
    }
    
void add(fraction f1, fraction f2)
    {
num = (f1.num * f2.demo) + (f2.num * f1.demo);
demo = (f1.demo*f2.demo);
}
    
void sub(fraction f1, fraction f2)
{
num = (f1.num * f2.demo) - (f2.num * f1.demo);
demo = (f1.demo*f2.demo);
}

 void display()
 {
cout<<num<<"/"<<demo<<endl;
}
};

int main()
{
fraction f1, f2, f3;
cout << "Enter first fraction :"<<endl;
f1.input();
cout << "Enter second fraction : "<<endl;
f2.input();
cout<<"Addition"<<endl;
f3.add(f1, f2);
f3.display();
cout<<"Subtraction"<<endl;
f3.sub(f1 , f2);
f3.display();

    return 0;
}

