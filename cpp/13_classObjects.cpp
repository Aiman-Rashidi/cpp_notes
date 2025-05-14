#include <iostream>
using namespace std;

class employee
{
public:
    string name;
    int salary;

    void printDetails()
    {
        cout << "name of the 1st employee is " << this->name << " and his salary is " << this->salary << " dollars" << endl;
    }
};

int main()
{
    employee aiman;
    aiman.name = "Aiman Rashidi";
    aiman.salary = 100;

    // cout << "name of the 1st employee is " << aiman.name << " and his salary is " << aiman.salary << " dolloars" << endl;

    aiman.printDetails();

    return 0;
}
