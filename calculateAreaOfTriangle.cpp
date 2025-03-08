#include<iostream>
using namespace std;

class Swapping
{
private:
    double base,height;
public:
    void calculate_area(double x,double y)
    {
        double area;
        base=x;
        height=y;
        area=.5*base*height;
        cout<<"AREA="<<area<<endl;
    }
};
int main()
{

    double x,y,area;
    cin>>x>>y;
    cout<<"BASE="<<x<<"  HEIGHT="<<y<<endl;
    Swapping obj;
    obj.calculate_area(x,y);
}

