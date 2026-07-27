#include<iostream>
using namespace std;
int main()
{
int num , rev= 0;
cout<<"Enter the number ";
cin>>num;
int original = num;

while(num>0)
{
int dig = num%10;
rev = rev*10+dig;
num = num/10;
}
if(rev==original){
cout<<"Number is a palindrome"<<endl;
}
else{
cout<<"Number is not palindrome"<<endl;
}

    
    return 0;
    }
