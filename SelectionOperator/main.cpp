#include <iostream>
#include "state.h"
using namespace std;

int main()
{
    State obj;
    State *p = &obj;
    p -> display(); //selection operator

    return 0;
}
