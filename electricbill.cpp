#include <stdio.h>
#include <iostream>
using namespace std;

class consumer
{
    public:
    char name[50];
    long cnum, cread, lread; 
    string ctype;
    char bmonth[10];
    float pay;

    void readData()
    {
        cout<<"enter name:\n";
        cin>>name;
        cout<<"enter consumer number\n";
        cin>>cnum;
        cout<<"enter consumer type(commercial or non-commercial)\n";
        cin>>ctype;
        cout<<"enter current meter reading\n";
        cin>>cread;
        cout<<"enter last meter reading\n";
        cin>>lread;
        cout<<"enter bill month\n";
        cin>>bmonth;
    }
   void calculateBill()
    {
      if (ctype == "commercial")
       { 
            if((cread-lread)<=200)
            { 
              pay= 5*(cread-lread);
            }
            else 
            { 
                pay= 1000 + 10*(200-(cread-lread));
            }
        }
          
    else if (ctype == "non-commercial")
        { 
            if((cread-lread)<=100)
            { 
             
              pay= 3*(cread-lread);
            }
            else 
            { 
                
                pay= 300 + 5*(100-(cread-lread));
            }
        }
        else
         {cout<<"Enter valid consumer type \n";}
    }
    
    void printBill()
    {
        cout<<"\nconsumer name:"<<name;
        cout<<"\nconsumer number:"<<cnum;
        cout<<"\nconsumer type(commercial or non-commercial):"<<ctype;
        cout<<"\ncurrent meter reading:"<<cread;
        cout<<"\nlast meter reading:"<<lread;
        cout<<"\nbill month:"<<bmonth;
        cout<<"\namount to pay:"<<pay;
    }
};

int main()
{ 
    int i; 
    consumer c[2];
    for(i=0;i<2;i++)
    {
	 cout<<"\n Enter details of "<<i<<" consumer\n";	
    c[i].readData();
    }
    for(i=0;i<2;i++)
    {
    c[i].calculateBill();
    c[i].printBill();
    }
    return 0;
}