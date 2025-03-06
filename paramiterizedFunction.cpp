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
        cout<<"ID=  "<< id <<"   "<<"GPA  "<<gpa<<endl;
    }
    void setvalues(int x, double y)
    {
        id=x;
        gpa=y;
    }
};
int main()
{
    student Alim,Simanto;
    Alim.setvalues(1,4.5);
    Alim.display();
    Simanto.setvalues(2,5.00);
    Simanto.display();

    getch();

}

