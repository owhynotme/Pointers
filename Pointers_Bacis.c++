#include <iostream>
using namespace std;

int main()
{
    int a = 12;
    int *b = &a; // (&) Address of operator

    cout << "The address of A = " << b<<endl;
    cout << "The address of A = " << &a<<endl;

    // (Value At) Derefernec operator

    cout << "The value of A = " << *b<<endl;

    return 0;
}