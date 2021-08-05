#include <iostream>
using namespace std;

int main()
{
   float *y = new float; int *i = new int; float *f = new float;
  cout<<"Enter Inches to Convert :";
   cin>> *i;

*y=*i/432;
*i=*i%432;
*f=*i/12;
*i=*i%12;

cout<<"\nAfter Conversion from inches to feet, yards and inches :: \n";
cout<<"\n Yard="<<*y<<"\n Feet="<<*f<<"\n Inches="<<*i;
delete y;
delete i;
delete f;
    return 0;
}