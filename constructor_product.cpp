#include <iostream>
using namespace std;

class product
{
    int productID;
    string name;
    float price;

public:
// Default 
product()
{
productID = 123;
name = "Cup cakes";
price = 45;
 }

 // Parameterized 
product(int i, string n, float r)
{
productID= i;
name = n;
price = r;
}

// Copy 
product(const product &p)
{
productID = p.productID;
name = p.name;
price = p.price;
}

void display()
{
cout << "Product ID: " << productID<< endl;
cout << "Name: " << name << endl;
cout << "Price: " << price << endl;
}
};

int main()
{
product p1;

cout << "Default:" << endl;
p1.display();

product p2(11, "Pen", 60);

cout << "\n Parameterized:" << endl;
p2.display();

product p3(p2);

cout << "\n Copy:" << endl;
p3.display();

    return 0;
}

