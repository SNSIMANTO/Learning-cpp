//constructor is a special type of function which can be use to initialize the object
//constructor has no return type not even void
//constructor has the same name as class
//it is called automitacally
#include<iostream>
#include<conio.h>
using namespace std;
class student
{
public:
    int id;
    double Gpa;
    student(int x,double y)
    {
        id=x;
        Gpa=y;
    }
    display()
    {
        cout<<"ID= "<<id<< "  "<<"GPA= "<<Gpa<<endl;
    }
};
int main()
{
    student Alim(1,3.89);
    Alim.display();

    student simanto(2,3.00);
    simanto.display();

    getch();
}
