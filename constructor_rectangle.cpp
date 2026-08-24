#include <iostream>
using namespace std;

class rectangle
{
    int length;
    int breadth;

public:
// Default 
rectangle()
{
length = 0;
breadth = 0;
 }

 // Parameterized 
rectangle(int l, int b)
{
length = l;
breadth = b;
}

// Copy 
rectangle(const rectangle &r)
{
length = r.length;
breadth = r.breadth;
}

void area()
{
cout <<"Area = "<<length*breadth<<endl;
}
};

int main()
{
rectangle r1;
cout<<"default:"<<endl;
r1.area();

rectangle r2(10,5);
cout<<"parameterized:"<<endl;
r2.area();

rectangle r3(r2);
cout<<"copy:"<<endl;
r3.area();

    return 0;
}

