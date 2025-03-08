#include "state.h"
#include<iostream>
using namespace std;
void State::display() const
{
    cout<<"Constant IS CALLED"<<endl;
}
void State::display2()
{
    cout<<"Non constant IS CALLED"<<endl;
}
