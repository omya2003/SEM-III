#include <iostream>
using namespace std;

class External1;
class Internal1
{
  int math, oop, se, ds;
public:
    Internal1 (int math = 0, int oop = 0, int se = 0, int ds = 0)
  {
    this->math = math;
    this->oop = oop;
    this->se = se;
    this->ds = ds;
  }
  
  friend void result (Internal1 internals, External1 externals);
  friend void operator + (Internal1, External1);	//function declaration
};

class External1
{
  int math, oop, se, ds;
public:
    External1 (int math = 0, int oop = 0, int se = 0, int ds = 0)
  {				//Class constructor
    this->math = math;
    this->oop = oop;
    this->se = se;
    this->ds = ds;
  }
  friend void result (Internal1 internals, External1 externals);
  friend void operator + (External1 e, Internal1 i)
  {
    result (i, e);
  }
};

void operator + (Internal1 i, External1 e)
{				//Definition 
  result (i, e);
}

void result (Internal1 internals, External1 externals)
{				//friend function
  int math = internals.math + externals.math; 
  int oop = internals.oop + externals.oop; 
  int se = internals.se + externals.se; 
  int ds = internals.ds + externals.ds; 
  int total = math + oop + se + ds;
  cout << " Final Marks Obtained:\n " << endl;
  cout << " Math:\n " <<"TEE marks-> "<< externals.math << "\n ICA marks-> " << internals.math << "\n Total marks-> " << math << "\n Result:" << (math < 50 ? "Fail" : "Pass") << endl;
  cout << " OOP:\n " <<"TEE marks-> "<< externals.oop << "\n ICA marks-> " << internals.oop << "\n Total marks-> " << oop << "\n Result:" << (oop < 50 ? "Fail" : "Pass") << endl;
  cout << " SE:\n " <<"TEE marks-> "<< externals.se << "\n ICA marks-> " << internals.se << "\n Total marks-> " << se << "\n Result:" << (se < 50 ? "Fail" : "Pass") << endl;
  cout << " DS:\n " <<"TEE marks-> "<< externals.ds << "\n ICA marks-> " << internals.ds << "\n Total marks-> " << ds << "\n Result:" << (ds < 50 ? "Fail" : "Pass") << endl;
  cout << "\n -Total marks obtained: " << total << "/400" << endl;

  if (total >= 200)
    cout <<"\nCandidate has PASSED\n" <<" Percentage: " << (float) total / 4 << '%' << endl;
  else				//Percentage printed if candidate passes
    cout << "\nCandidate has FAILED\n";
}

int main ()
{
  string name = "Omi Wankhede", course = "B.Tech";
  Internal1 internals (45, 46, 37, 36);
  External1 externals (41, 39, 42, 29);

  cout << " REPORT CARD\n\n " << endl;
  cout << " Name of Candidate : " << name << endl;
  cout << " \nCourse : " << course << endl << endl;
  internals + externals;
  
  return 0;
}