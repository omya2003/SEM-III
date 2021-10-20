#include <iostream>
#include <fstream>
#include <string.h>                                            
#include <stdio.h>                                             
#include <conio.h>
using namespace std;

class Employee
{
    string name;
    int id;
    int salary;
    string department;

    public:
        void readData()
        {
            cout << "Enter The Following Employee Details:\n";
            cout << "Name of Employee: ";
            cin >> name;
            cout << "Employee ID: ";
            cin >> id;
            cout << "Salary of Employee: ";
            cin >> salary;
            cout << "Department of Employee: ";
            cin >> department;
        }

        void printDetails()
        {
           cout << name << " " << id << " " << salary << " " << department << endl;
        }

        void storedata()                        // creating and writing to file
        {
            ofstream out;
            out.open("employee_details.txt", ios :: app);
            out.write((char*)this, sizeof(*this));
            out.close();
        }

        void viewData()                             // read data from fie
        {
            ifstream fin("employee_details.txt");
            if (! fin)
                cout << "File not found\n";
            else
            {
                fin.read((char*)this, sizeof(*this));
                while (!fin.eof())
                {
                    printDetails();
                    fin.read((char*)this, sizeof(*this));
                }
            }
        }

        void searchData(string t)                   // search record in the file
        {
            int c = 0;
            ifstream fin("employee_details.txt");
            if (! fin)
                cout << "File not found\n";
            else
            {
                
                fin.read((char*)this, sizeof(*this));
                while (!fin.eof())
                {
                    if (!(t.compare(name)))
                    {
                        printDetails();
                        c++;
                    }
                    fin.read((char*)this, sizeof(*this));
                }
                if (c == 0){
                    cout << "Record not found!\n";
                }
                fin.close();
            }
        }

        void deleteRecord(string t)               //deletion of records from file
        {
            ifstream fin("employee_details.txt");
            if (! fin)
                cout << "File not found\n";
            else
            {
                ofstream out("temp.txt");
                fin.read((char*)this, sizeof(*this));
                while (!fin.eof())
                {
                    if ((t.compare(name)))
                    {
                        out.write((char*)this, sizeof(*this));
                    }
                    fin.read((char*)this, sizeof(*this));
                }
                fin.close();
                out.close();
                remove("employee_details.txt");
                rename("temp.txt", "employee_details.txt");
            }
        }

        void modifyRecord(string t)
        {
            fstream fin("employee_details.txt");
            fin.seekg(0);
            fin.read((char*)this, sizeof(*this));
            while (!fin.eof())
            {
                if (!(t.compare(name)))
                {
                    readData();
                    fin.seekp(fin.tellp() - sizeof(*this));
                    fin.write((char*)this, sizeof(*this));
                }
                fin.read((char*)this, sizeof(*this));
            }
            fin.close();
        }
};

int menu()
{
    int c;
    cout << "\n\nEmployee details management:\n";
    cout << "\n1. Insert Employee data";
    cout << "\n2. View Employee database";
    cout << "\n3. Search Employee Record";
    cout << "\n4. Delete Employee Record";
    cout << "\n5. Update Employee Record";
    cout << "\n0. Exit";
    cout << "\n(choose corresponding number)";
    cin >> c;
    return c;
}

int main()
{
    string n;
    Employee e1;
    while(true)
    {
        system("cls");
        switch (menu())
        {
        case 1: 
            e1.readData();
            e1.storedata();
            cout << "\nRecord Inserted successfully";
            break;
        case 2:
            e1.viewData();
            break;
        case 3:
            cout << "Enter the name of employee whose data has to be searched: ";
            cin >> n;
            e1.searchData(n);
            break;
        case 4:
            cout << "Enter the name of employee whose data has to be deleted: ";
            cin >> n;
            e1.deleteRecord(n);
            break;
        case 5:
            cout << "Enter the name of employee whose records have to be modified: ";
            cin.ignore();
            cin >> n;
            e1.modifyRecord(n);
            break;
        case 0:
            getch();
            exit(0);

        default:
            cout << "\nInvalid Choice. Please Try Again";
        }
        getch();
    }

}