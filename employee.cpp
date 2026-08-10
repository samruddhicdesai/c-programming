#include<iostream>
using namespace std;
class employee
{
public:
  string name;
  int age ;
  int salary;
  
  void input()
  {
  cout<<"Enter Name = ";
  cin>>name;
  cout<<"Enter Age = ";
  cin>>age;
  cout<<"Enter Salary = ";
  cin>>salary;
  }
  void display()
  {
     cout<<"\nName = "<<name<<endl;
     cout<<"Age = "<<age<<endl;
     cout<<"Salary = "<<salary;
     }
  };
  int main()
  {
  employee s;
  s.input();
  s.display();
  return 0;
  }
