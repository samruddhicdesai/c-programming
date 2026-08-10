#include<iostream>
using namespace std;
class student 
{
public:
  string name;
  int roll;
  
  void input()
  {
  cout<<"Enter Name = ";
  cin>>name;
  cout<<"Enter Roll no = ";
  cin>>roll;
  }
  void display()
  {
     cout<<"\nName = "<<name<<endl;
     cout<<"Roll no = "<<roll<<endl;
     }
  };
  int main()
  {
  student s;
  s.input();
  s.display();
  return 0;
  }
