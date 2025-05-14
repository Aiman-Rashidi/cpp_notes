#include <iostream>
using namespace std;

class employee // base class
{
private:
    int password;

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

class programmer : public employee // child class (all propertis of base class -> inherited to child class)
{
public:
    int errors; // added another property variable for the special "employee" which is "programmer"
};

int main()
{
    employee aiman("Aiman Rashidi", 100, 12345678);
    aiman.printDetails();
    aiman.printPassword();
    return 0;
}