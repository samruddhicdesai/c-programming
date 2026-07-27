#include<iostream>
using namespace std;
int main()
{
int choice , num1 ,num2,c;
cout<<"Enter the number 1: ";
cin>>num1;
cout<<"Enter the number 2: ";
cin>>num2;
cout<<"  1.Addition\n , 2.Multiplication\n , 3.Subtraction\n , 4.Division"<<endl;
cout<<"Enter the choice: ";
cin>>choice;
switch(choice){
    case 1:
    c = num1 + num2;
    cout<<c<<endl;
    break;
    
    case 2:
    c = num1*num2;
    cout<<c<<endl;
    break;
    
    case 3:
    c = num1 - num2;
    cout<<c<<endl;
    break;
    
    case 4:
    c = num1/num2;
    cout<<c<<endl;
    break;
    
    default:
    cout<<"invalid choice";
    }
    return 0;
    }
