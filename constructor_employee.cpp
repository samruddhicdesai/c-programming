#include <iostream>
using namespace std;

class employee
{
    int id;
    string name;
    float salary;

public:
// Default 
employee()
{
id = 0;
name = "Marry";
 salary = 0;
 }

 // Parameterized 
 employee(int i, string n, float s)
{
id = i;
name = n;
salary = s;
}

// Copy 
employee(const employee &e)
{
id = e.id;
name = e.name;
salary = e.salary;
}

void display()
{
cout << "Employee ID: " << id << endl;
cout << "Name: " << name << endl;
cout << "Salary: " << salary << endl;
}
};

int main()
{
employee e1;

cout << "Default:" << endl;
e1.display();

employee e2(101, "Tom", 600000);

cout << "\n Parameterized:" << endl;
e2.display();

employee e3(e2);

cout << "\n Copy:" << endl;
e3.display();

    return 0;
}

