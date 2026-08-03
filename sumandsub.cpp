#include<iostream>
using namespace std;
class sum_and_sub 
{
public:
  int num1 , num2 ,sum, sub;
  
  void input()
  {
  cout<<"Enter number 1 = ";
  cin>>num1;
  cout<<"Enter number 2  = ";
  cin>>num2;
  sum = num1 + num2;
  sub = num1 - num2;
  }
  void display()
  {
     cout<<"sum  = "<<sum<<endl;
     cout<<"sub = "<<sub<<endl;
     }
  };
  int main()
  {
  sum_and_sub s;
  s.input();
  s.display();
  return 0;
  }
