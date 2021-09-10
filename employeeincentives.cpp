#include <iostream>
#include <conio.h>
using namespace std;

class Employee
{
    string name;
    int id;
    string department;
    int salary;

    friend class Sales;
public:
    void readDetails()
    {
        cout << "ENTER EMPLOYEE DETAILS\n" << endl;
        cout << "Enter Employee's name: ";
        cin >> name;
        cout << "Enter Employee's ID: ";
        cin >> id;
        cout << "Enter Employee's Department: ";
        cin >> department;
        cout << "Enter Employee's monthly salary: ";
        cin >> salary;
    }
};

class Sales
{
    int sales;
    float incentives;
    string performance;

public:
    void readSalesDetails()
    {
        cout << "Enter Employee's monthly sales: ";
        cin >> sales;
    }
    void incentivesCalc(Employee obj)
    {
        if (sales>=150)
        {
            incentives=0.3*obj.salary;
            
        }
        else if (sales>=100 && sales < 150)
        {
            incentives=0.2*obj.salary;
            
        }
        else if (sales>=50 && sales < 100)
        {
            incentives=0.1*obj.salary;
            
        }
        else
        {
            incentives=0;   
        }
    }
    void performanceIndicator(Employee obj)
    {
        if (sales>=150)
        {
            performance="Excellent";
        }
        else if (sales>=100 && sales < 150)
        {
            performance="Good";
        }
        else if (sales>=50 && sales < 100)
        {
            performance="Satisfactory";
        }
        else
        {
            performance = "Poor";   
        } 
       
    }
    void printDetails(Employee obj)
    {
        cout << "\n\nEMPLOYEE DETAILS\n" << endl;
        cout << "Employee Name: " << obj.name << endl;
        cout << "Employee ID: " << obj.id << endl;
        cout << "Department of Employee: " << obj.department << endl;
        cout << "Monthly salary of Employee: " << obj.salary << endl;
        cout << "Monthly sales of Employee: " << sales <<" units" <<endl;
        cout << "Incentives Acquired by Employee: " << incentives << endl;
        cout << "Performance of Employee: " << performance << endl;
    }
};

int main()
{
    Employee E;
    Sales S;

    E.readDetails();

    S.readSalesDetails();
    S.incentivesCalc(E);
    S.performanceIndicator(E);
    S.printDetails(E);
 
    getch();
}