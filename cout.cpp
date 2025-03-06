#include<iostream>
using namespace std;
class student
{
public:
    int id;
    double gpa;
};
int main()
{
    student Alim,Simanto;
    Alim.id=101;
    Alim.gpa=3.00;
    Simanto.id=4;
    Simanto.gpa=4;
    cout<<"ID="<< Alim.id <<"   "<<"GPA"<<Alim.gpa<<endl;
    cout<< Simanto.id <<"   "<<Simanto.gpa<<endl;

}
