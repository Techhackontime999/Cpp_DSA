#include <iostream>
using namespace std;
class Employee
{
public: // public is accessible at every place
    int emp_id;
    string name;
    float salary;
    // non-parametrized constructor // default constructor
    Employee()
    {
    }

    Employee(int emp_id, string name, float salary, string contact, string email, bool healthy) // parametrized constructor
    {
        this->emp_id = emp_id;
        this->name = name;
        this->contact = contact;
        this->email = email;
        this->healthy = healthy;
        this->salary = salary;
    }
    void display()
    {
        cout << this->emp_id << " " << this->name << " " << this->salary << " " << this->email << " " << this->healthy << endl;
        return;
    }

private: // private is accessible only inside class
    string contact;
    string email;

protected: // protected is accessible inside class and inside its derived child.
    bool healthy;
};

int main()
{
    // Employee a(01,"Amit Sahu",30000,"6287804551","amitkumarkh01012006@gmail.com",true);
    // a.display();
    // Employee b(02,"Sumit Kumar",40000,"6287804552","sumitkumarkh01012006@gmail.com",false);
    // b.display();

    // Employee c(03,"Suraj Kumar",50000,"6287804553","surajkumarkh01012006@gmail.com",true);
    // c.display();
    // Employee *d=new Employee(03,"Suraj Kumar",50000,"6287804553","surajkumarkh01012006@gmail.com",true);//dynamically created a employee.
    // d->display();
    // Employee *p=&a;
    // p->display();

    // Employee arr[10];//array of employee
    // arr[0].emp_id = 01;
    // arr[0].name = "suraj";
    // arr[0].salary = 20000;
    // arr[1].emp_id = 01;
    // arr[1].name = "suraj";
    // arr[1].salary = 20000;
    // arr[2].emp_id = 01;
    // arr[2].name = "suraj";
    // arr[2].salary = 20000;

    // for (int i = 0; i < 3; i++)
    // {
    //     arr[i].display();
    // }

    return 0;
}