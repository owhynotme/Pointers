#include <iostream>
using namespace std;

int main()
{
    int a = 12;
    int *b = &a;
    int **c = &b;

    // Address
    cout << "The Address of B = " << c << endl;
    cout << "The address of B = " << &b << endl;

    // value
    cout << "Value of C " << *c << endl;
    cout << "Value of C having value of B " << **c << endl;

    return 0;
}