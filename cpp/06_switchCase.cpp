#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "enter your age: ";
    cin >> age;

    switch (age)
    {
    case 12:
    {
        cout << "age = 12" << endl;
        break;
    }
    case 13:
    {
        cout << "age = 13" << endl;
        break;
    }
    case 14:
    {
        cout << "age = 14" << endl;
        break;
    }
    case 15:
    {
        cout << "age = 15" << endl;
        break;
    }
    case 16:
    {
        cout << "age = 16" << endl;
        break;
    }
    case 17:
    {
        cout << "age = 17" << endl;
        break;
    }
    case 18:
    {
        cout << "age = 18" << endl;
        break;
    }
    case 19:
    {
        cout << "age = 19" << endl;
        break;
    }
    case 20:
    {
        cout << "age = 20" << endl;
        break;
    }
    default:
    {
        cout << "not valid here!" << endl;
        break;
    }
    }
}