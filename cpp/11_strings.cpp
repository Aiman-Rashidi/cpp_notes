#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name = "Aiman";
    cout << "My name is " << name << endl;
    cout << "My length of name is " << name.length() << endl;
    cout << "My name is " << name.substr() << endl;
    cout << "My name is " << name.substr(0, 5) << endl; // (strating index, no of values it wants )
    cout << "My name is " << name.substr(0, 2) << endl;
    cout << "My name is " << name.substr(2, 4) << endl; 
    cout << name[4] << endl;
    cout << name[5] << endl;
    cout << name[6] << endl; // arbitrary value
}