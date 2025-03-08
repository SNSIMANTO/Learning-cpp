#include <iostream>
#include "state.h"
using namespace std;
int main()
{
    const State obj1;//constant object
    obj1.display();
//only constant function can call a constant object...
    State ob2;//non constant object
    ob2.display2();
    return 0;
}
