#include <iostream>
using namespace std;
class person
{
    int id;
    char name[100];

public:
    void setp()
    {
        cout << "\n enter the peron id:";
        cin >> id;
        cout << "\nenter the name of the person";
        cin >> name;
    }
    void display()
    {
        cout << "\n ID" << id << "\n Name" << name << endl;
    }
};
class student : private person
{
    char course[50];
    int fees;

public:
    void sets()
    {
        setp();
        cout << "\n enter the name of the course:";
        cin >> course;
        cout << "\n enter the course fees";
        cin >> fees;
    }
    void displays()
    {
        display();
        cout << "\ncourse:" << course << "\n fees" << fees << endl;
    }
};
int main()
{
    student s;
    s.sets();
    s.displays();
}
