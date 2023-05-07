#include <iostream>
#include "smart_pointer.h"
#include "smart_pointer.cpp"
using namespace std;

int main()
{
    smart_pointer<int> p(new int);
    *p = 1;
    cout << "Value is: " << *p << endl;
}