#include <iostream>
using namespace std;
class Employee
{
public:
    string name;
    int salary;
    Employee(string n, int s, int sp)
    {
        this->name = n;
        this->salary = s;
        this->secretpasssword = sp;
    }
    void printdetails()
    {
        cout << "The name of employee is " << this->name << " and his salary is " << this->salary << endl;
    }

    void getSecretPassword()    // functions can access private variables
    {
        cout << "The secret password is : " << this->secretpasssword << endl;
    }

private:
    int secretpasssword;
};
int main()
{
    Employee har("Harry Constructor", 344, 987897698); // The name of employee is Harry Constructor and his salary is 344
    // har.name="Harsh";
    // har.salary=100000;
    // cout<<"The name of employee is "<<har.name<<" and his salary is "<<har.salary;
    har.printdetails();
    har.getSecretPassword();
    // cout<<"The secret password is "<< har.secretpasssword<<endl; error ayega, aise nahi kar skte
    return 0;
}