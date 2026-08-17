#include <iostream>
using namespace std;

class Time
{
public:
   int hours, minutes, seconds;
void accept()
    {
cout << "Enter hours, minutes and seconds: ";
cin >> hours >> minutes >> seconds;
    }
void add(Time t1, Time t2)
    {
seconds = t1.seconds + t2.seconds;
minutes = t1.minutes + t2.minutes;
hours = t1.hours + t2.hours;

if (seconds >= 60)
{
seconds = seconds - 60;
minutes++;
}
if (minutes >= 60)
 {
minutes = minutes - 60;
hours++;
}
}
 void display()
 {
cout << hours << ":" << minutes << ":" << seconds;
}
};

int main()
{
Time t1, t2, t3;
cout << "Enter first time:\n";
t1.accept();
cout << "Enter second time:\n";
t2.accept();
t3.add(t1, t2);
cout << "Result =  ";
t3.display();
cout<<"\nProgram Ends Here"<<endl;
return 0;
}

