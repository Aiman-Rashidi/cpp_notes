#include <iostream>
using namespace std;

int main()
{
    int a = 343;
    cout << a / 2 << endl;
    cout << float(a) / 2 << endl; // typecasted to a floating number

    float b = 34.999;
    cout << int(b); // typecasted to an int hence all decimal point disappeared 
}