#include<iostream>
using namespace std;
class even
{
public:
  int num;
  
  void input()
  {
  cout<<"Enter number = ";
  cin>>num;
  }
  void display()
  {
    if (num%2==0){
      cout<<"Even"<<endl;
     }
    else{
    cout<<"Odd"<<endl;
    }
    }
  };
  int main()
  {
   even e;
   e.input();
   e.display();
  return 0;
  }
 
