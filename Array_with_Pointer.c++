#include <iostream>
using namespace std;

int main()
{
    int arr[4];

    for (int i = 0; i < 4; i++)
    {
        cout << "Enter the Value of "<<i+1<<endl;
        cin >> arr[i];
    }

    int *ptr = arr;
    for (int i = 0; i < 4; i++)
    {    
        cout << "Value of "<<i+1<<endl<< *(ptr+i) << endl;
        
    }

    return 0;
}