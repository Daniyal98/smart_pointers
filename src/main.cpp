#include <iostream>
#include "smart_pointer.h"
#include "smart_pointer.cpp"
#include "unique_pointer.h"
#include "unique_pointer.cpp"
using namespace std;

int main()
{
    smart_pointer<int> p(new int(5));
    cout << "Value is: " << *p << endl;

    unique_pointer<int> unique(new int(10));
    cout << "Value is: " << *unique << endl;
}