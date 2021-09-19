#include <iostream>
#include <conio.h>               //for getch()              
using namespace std;

class Doctor
{
    public:
        string doctorName;
        string doctorArea;
        
    void readData()
        {
            cout << "\nEnter the name of the Doctor: ";
            cin >> doctorName;
            cout << "Enter the name of the Area: ";
            cin >> doctorArea;
        }
    friend int operator<(string A1, string A2);  
    static void printList();
};

int n = 3;
Doctor A[3];

int operator<(string A1, string A2)         //comparison operator
{
    if (A1 > A2)
        return 1;
    else    
        return 0;
}


int main()
{
    for (int i = 0; i < n; i++)
    {
        A[i].readData();
    }

    for (int i = 0; i < n - 1; i++)               //sorting area alphabetically 
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if ((operator<(A[j].doctorArea, A[j + 1].doctorArea))) 
            {
                std::swap(A[j], A[j + 1]);   //comparison operator used in main
            }
        }
    } 
    cout << "\n\nDoctors list sorted according to area:\n" << endl;
    for (int i = 0; i < n; i++)              
    {                                       //printing list in main function
        cout << "Doctor Name: Dr. " << A[i].doctorName << endl;
        cout << "Area: " << A[i].doctorArea << endl << endl;
    }
    getch();
}
