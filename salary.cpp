#include <stdio.h>
#include <iostream>
using namespace std;

class Employee
{
    public:
    long eid; 
    string name, dept;
    double *bsalary;
    double da, hra, ta, gsalary;
     
    //default constructor (here, it is dynamic constructor also)   
    Employee()
    {
    eid=456; 
    name="omi";
    dept="HR";
    
    //dynamically allocating the memory using new keyword
    bsalary = new double; 
    *bsalary=10000.0;
    calculate();
    display();
    
    }
// constructor overloading (here dynamic constructor with parameters) 
    Employee(long e,string n,string d,float b)
    {
    eid=e;
    name=n;
    dept=d; 
    bsalary = new double; 
    *bsalary=b;
    calculate();
    display();
    }
    
    // copy constructor with a Employee object as parameter
    // copies data of the obj parameter
  Employee(Employee &obj) {
    eid=obj.eid;
    name=obj.name;
    dept=obj.dept;
    bsalary = new double; 
    *bsalary=*obj.bsalary;
    obj.calculate();
    obj.display();
    }

   void calculate()
    {
      da = *bsalary*0.5;
      hra = *bsalary*0.3;
      ta = *bsalary*0.1;
      gsalary = *bsalary+da+hra+ta;
    }
    void display()
    {
        cout<<"\nemployee name: "<<name;
        cout<<"\nemployee ID: "<<eid;
        cout<<"\nemployee department: "<<dept;
        cout<<"\nbasic salary: "<<*bsalary;
        cout<<"\ndearness allowance: "<<da;
        cout<<"\nHRA(30% of basic salary): "<<hra;
        cout<<"\nTA(10% of basic salary): "<<ta;
        cout<<"\nGross salary(total): "<<gsalary;
        cout<<"\n\n";
    }
   
    // destructor
    ~Employee()
    {
        cout << "\nDestructor called";
    }
    
    
};



int main()
{ 
    int i; 
    //calling default (dynamic) constructor with dynamic memory allocation to basic salary
    Employee e1;
    //calling parameterized constructor - constructor overloading demo
    Employee e2(123,"Ram","Marketing", 20000);
    Employee e3(234,"Shyam","Accounts",30000);
    // copy contents of e3 to e4
    Employee e4=e3;
    // or can be called like below
    Employee e5(e3);
    //dynamic constructor- dynamically allocating memory to employee object
    Employee *e6=new Employee (345,"Sita","Accounts",40000);
    return 0;
}