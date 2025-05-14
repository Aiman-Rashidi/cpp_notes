#include <iostream>
using namespace std;

class employee
{
private:
    int password; // private variables can't be accessed by the main function directly

public:
    string name;
    int salary;

    employee(string nameInConstructor, int salaryInConstructor, int passwordInConstructor)
    {
        this->name = nameInConstructor;
        this->salary = salaryInConstructor;
        this->password = passwordInConstructor;
    }

    void printDetails()
    {
        cout << "name of the 1st employee is " << this->name << " and his salary is " << this->salary << " dollars" << endl;
    }
    void printPassword()
    {
        cout << "and his password is " << this->password << endl;
    }
};

int main()
{
    employee aiman("Aiman Rashidi", 100, 12345678);
    aiman.printDetails();
    aiman.printPassword();
    return 0;
}