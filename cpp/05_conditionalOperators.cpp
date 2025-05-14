#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "enter your age: ";
    cin >> age;

    if (age > 100 || age < 15)
    {
        cout << "invalid age!";
    }
    else if (age >= 18)
    {
        cout << "you can vote!";
    }
    else
    {
        cout << "you can not vote!";
    }
}