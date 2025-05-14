#include <iostream>
using namespace std;

int main()
{
    int a = 34; // also point to any data type (float) with a pointer
    int *ptr;
    ptr = &a;
    cout << ptr << endl;
    cout << *ptr << endl;
}