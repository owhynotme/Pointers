#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void RefrenceOperator(int &x, int &y)
{
    int temp;
    x = 44, y = 88;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a, b, x = 2, y = 8;
    cout << "Enter the value of A & B\n";
    cin >> a >> b;
    cout << "Value of A & B " << a << " " << b << endl;
    swap(&a, &b);
    cout << "Value of A and B " << a << " " << b << endl;
    RefrenceOperator(x, y);
    cout << "Value of X " << x << " " << "Value of Y " << y;

    return 0;
}