#include<iostream>
using namespace std;
class largest
{
public:
  int a  ,b;
  
  void input()
  {
  cout<<"Enter a = ";
  cin>>a;
  cout<<"Enter b = ";
  cin>>b;
  }
  void display()
  {
    if (a>b){
      cout<<"a is largest"<<endl;
     }
    else{
    cout<<"b is largest"<<endl;
    }
    }
  };
  int main()
  {
   largest l;
   l.input();
   l.display();
  return 0;
  }
 
