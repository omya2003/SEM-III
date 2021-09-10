#include <iostream>
#include <conio.h>
using namespace std;

class TEE;
class ICA
{
    float math;
    float oop;
    float se;
    float ds;

public:
    void readIcaMarks(void)
    {
        cout << "\n\nENTER ICA MARKS" << endl;
        cout << "\nEnter ICA Marks obtained in Maths: ";
        cin >> math;
        cout << "Enter ICA Marks obtained in OOP: ";
        cin >> oop;
        cout << "Enter ICA Marks obtained in SE: ";
        cin >> se;
        cout << "Enter ICA Marks obtained in DS: ";
        cin >> ds;
    }
friend void calculate(ICA, TEE);
};

class TEE
{
    float math;
    float oop;
    float se;
    float ds;

public:
    void readTeeMarks()
    {
        cout << "\n\nENTER TEE MARKS" << endl;
        cout << "\nEnter TEE Marks obtained in Maths: ";
        cin >> math;
        cout << "Enter TEE Marks obtained in OOP: ";
        cin >> oop;
        cout << "Enter TEE Marks obtained in SE: ";
        cin >> se;
        cout << "Enter TEE Marks obtained in DS: ";
        cin >> ds;
    }
    
    friend void calculate(ICA, TEE);
};

void calculate(ICA I, TEE T)
{
    cout << "\n\nRESULT OF CANDIDATE:" << endl;
    cout << "\nTotal marks in Maths: " << I.math + T.math << endl;
    cout << "Total marks in OOP: " << I.oop + T.oop << endl;
    cout << "Total marks in SE: " << I.se + T.se << endl;
    cout << "Total marks in DS: " << I.ds + T.ds << endl
         
         << endl;
}

int main()
{
    TEE T;
    ICA I;

    I.readIcaMarks();
    T.readTeeMarks();
    calculate(I, T);

    getch();
}