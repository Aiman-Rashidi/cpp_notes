#include <iostream>
using namespace std;

int sum(int n1Passed, int n2Passed)
{
    int result;
    result = n1Passed + n2Passed;
    return result;
}

int main()
{
    int  n1, n2;
    cout << "enter 1st number: ";
    cin >> n1;
    cout << "enter 2nd number: ";
    cin >> n2;

    cout << n1 << " + " << n2 << " = " << sum(n1, n2) << endl;
}