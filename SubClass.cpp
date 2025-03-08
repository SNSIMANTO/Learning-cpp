#include<iostream>
using namespace std;

class state
{
public:
    int    a=10;
    void in()
    {
        cout<<a<<endl;
    }
protected:
    int    x=10;
    int  y=20;

};
class cse :public state//sub class
{
public:
    void result()
    {
        cout<<x<<"   "<<y<<endl;
    }
};
int main()
{

    cse obj;
    obj.result();
    state oj;
    oj.in();

}
