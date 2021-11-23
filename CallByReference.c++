#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    cout << "Enter the value of A & B\n";
    cin >> a >> b;
    cout << "Value of A & B " << a<<" " << b<<endl;
    swap(&a, &b);
    cout << "Value of A and B " << a<<" " << b<<endl;

    return 0;
}