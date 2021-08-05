#include <iostream>
using namespace std;

float avgMarks(float x[]);

float avgMarks(float x[])
{
    float sum=0;
    float avg;
    for (int i = 0; i < 5; i++)
         { sum=sum+x[i];}
       avg =sum/5;
    return avg;
}
int main()
{
   float *marks= new float[5];
   float *avg=new float;
   // Request block of memory of size n
   cout<<"Enter 5 students marks :";
   for (int i = 0; i < 5; i++)
            cin>>marks[i];
    
    *avg=avgMarks(marks);
  
   cout<<"\n Average marks of the subject ="<<*avg;
    delete[] marks;
    delete avg;

    return 0;
}