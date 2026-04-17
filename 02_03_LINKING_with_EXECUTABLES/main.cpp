#include<iostream>
#include "adder.hpp"
using namespace std;

int main()
{
    cout << adder::add(1, 2) << endl;
    cout << adder::add(1.5f, 2.5f) << endl;
    cout << adder::add(1.5, 2.5) << endl;

    return 0;
}
