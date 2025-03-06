#include<iostream>
#include<conio.h>
using namespace std;
class student
{
public:
    int id;
    double gpa;
    void display()
    {
        cout<<"ID="<< id <<"   "<<"GPA"<<gpa<<endl;
    }
};
int main()
{
    student Alim,Simanto;
    Alim.id=101;
    Alim.gpa=3.00;
    Simanto.id=4;
    Simanto.gpa=4;
    Alim.display();

    Simanto.display();

    getch();

}

