#include <iostream>

using namespace std;

class Student
{
public:
    int *age;
    string name;
    Student()
    {
        age = 0;
        name = "Unknown";
    }
    Student(int a, string n)
    {
        age = new int(a);
        name = n;
    }

    Student(const Student &s)
    {
        age = new int(*(s.age));
        name = s.name;
        cout << "Copy constructor called for " << name << endl;
    }

    ~Student()
    {
        delete age;
        cout << "Destructor called for " << name << endl;
    }
    void display()
    {
        cout << "Name: " << name << ", Age: " << *age << endl;
    }
};

int main()
{
    Student s1(21, "Alice"); // Default constructor
    s1.display();

    Student s2 = s1;
    s2.display();

    return 0;
}