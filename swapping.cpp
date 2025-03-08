#include<iostream>
using namespace std;

class Swapping
{
public:
    void calculate_area(double x,double y)
    {
        double t;
        t=x;
        x=y;
        y=t;
        cout<<"output x="<<x<<"  output y="<<y<<endl;
    }
};
int main()
{

    double x,y;
    cin>>x>>y;
    cout<<"Input x="<<x<<"  Output y="<<y<<endl;
    Swapping obj;
    obj.calculate_area(x,y);
}
