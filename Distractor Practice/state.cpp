#include "state.h"
#include<iostream>
using namespace std;

State::State()
{
    cout<<"This the constructor."<<endl;
}

State::~State()
{
    cout<<"Distructor"<<endl;
}
void State ::display()
{
    cout<<"Display is called."<<endl;
}
