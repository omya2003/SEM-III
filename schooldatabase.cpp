#include <iostream>
using namespace std;


class Staff                                                         //base class
{
   public:
    int code;
    string name;
    string profession;                               
    
    void read(string n, int c, string p)               // to input employee data
    {
        name = n;
        code = c;
        profession = p;
    }                                                
    
    void display()                                   // to display employee data
    {
        cout << "\nEmployee name: " << name << endl;
        cout << "Employee code: " << code << endl;
        cout << "Profession: " << profession << endl;
    }
};

class Teacher : public Staff                                       
{
   public:
    string sub;
    string publ;
    
    void tchr_read(string s, string p)                  // to input teacher data
    {
        sub = s;
        publ = p;
    }
    
    void tchr_display()                               // to display teacher data
    {
        cout << "Subject: " << sub << endl;
        cout << "Publication: " << publ << endl;
    }
    
};

class Officer : public Staff                                      
{
   public:
    string grade;
    
    void off_read(string g)                             // to input officer data
    {
        grade = g;
    }
    
    void off_display()                                // to display Officer data
    {
        cout << "Grade: " << grade << endl;
    }
};


class Typist : public Staff                                       
{
   public: 
    int speed;
    
    
    void typ_read(int s)                                // to input typist data
    {
        speed = s;
    }
    
    
    void typ_display()                                // to display typist data
    {
        cout << "Average Typing Speed: " << speed << "wpm" << endl;
    }
};


class Regular : public Typist                            // regular typist class
{
   public:
    
};


class Casual : public Typist                              // casual typist class
{
   public:
    float d_wage;
    
    
    void typ_c_read(float d)                     // to input casual Typist data
    {
        d_wage = d;
    }
    
    
    void typ_c_display()                        // to display casual typist data
    {
        cout << "Daily wage:₹" << d_wage << endl;
    }
    
};


int main()
{
    int a;
    Staff S;                                   //Objects
    Teacher T1, T2, T3;      
    Officer O1, O2;              
    Typist T;                
    Regular R1, R2, R3;          
    Casual C1, C2;               
    
    
    T1.read("Omi101", 101, "Teacher");         //Database
    T1.tchr_read("Mathematics", "NCERT");
    T2.read("Omi102", 102, "Teacher");
    T2.tchr_read("Science", "NCERT");
    T3.read("Omi103", 103, "Teacher");
    T3.tchr_read("Social Studies", "NCERT");
    
    O1.read("Omi201", 201, "Officer");
    O1.off_read("A");
    O2.read("Omi202", 202, "Officer");
    O2.off_read("B");
    
    R1.read("Omi301", 301, "Regular typist");
    R1.typ_read(96);
    R2.read("Omi302", 302, "Regular typist");
    R2.typ_read(84);
    
    C1.read("Omi401", 401, "Casual Typist");
    C1.typ_read(103);
    C1.typ_c_read(900);
    C2.read("Omi402", 401, "Casual Typist");
    C2.typ_read(99);
    C2.typ_c_read(1200);
    
    cout << "EMPLOYEE DATABASE\n\nselect class:" << endl;   // user interface
    cout << "1) Teachers" << endl;
    cout << "2) Officers" << endl;
    cout << "3) All Typists" << endl;
    cout << "4) Regular typists" << endl;
    cout << "5) Casual typists" << endl;
    cout << "6) All employees" << endl;
    cout << "7) Exit Database" << endl;
    cin >> a;
    
    switch (a)
    {
        case 1:
            cout << "\nTeacher's details:" << endl;
            T1.display();
            T1.tchr_display();
            T2.display();
            T2.tchr_display();
            T3.display();
            T3.tchr_display();
            break;
            
        case 2:
            cout << "\nOfficer's details:" << endl;
            O1.display(); 
            O1.off_display();
            break;
            
        case 3:
            cout << "\nTypist's details:" << endl;
            R1.display();
            R1.typ_display();
            R2.display();
            R2.typ_display();
            C1.display();
            C1.typ_display();
            C1.typ_c_display();
            break;
            
        case 4:
            cout << "\nRegular typist's details:" << endl;
            R1.display();
            R1.typ_display();
            R2.display();
            R2.typ_display();
            break;
            
        case 5:
            cout << "\nCasual typist's details:" << endl;
            C1.display();
            C1.typ_display();
            C1.typ_c_display();
            break;
            
        case 6:
            cout << "\nAll employee's details" << endl;
            T1.display();
            T1.tchr_display();
            T2.display();
            T2.tchr_display();
            T3.display();
            T3.tchr_display();
            O1.display(); 
            O1.off_display();
            R1.display();
            R1.typ_display();
            R2.display();
            R2.typ_display();
            C1.display();
            C1.typ_display();
            C1.typ_c_display();
            break;
            
        case 7:
            return 0;
            break;
            
        default:
            cout << "\nInvalid Input\nPlease Try Again" << endl;
    }
    
    return main();
}
