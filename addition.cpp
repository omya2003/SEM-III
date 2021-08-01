#include <iostream>
using namespace std;
void add(long int x, long int y)
{
    long int z;
    z=x+y;
    cout<<"\n Addition is "<< z;
}
void add(long double x, long double y)
{
    long double z;
    z=x+y;
    cout<<"\n Addition is "<< z;
}
void add(double x, double y)
{
    double z;
    z=x+y;
    cout<<"\n Addition is "<< z;
}
void add(float x, float y)
{
    float z;
    z=x+y;
    cout<<"\n Addition is "<< z;
}
void add(int x, int y)
{
    int z;
    z=x+y;
    cout<<"\n Addition is "<< z;
}

void add(short x, short y)
{
    short z;
    z=x+y;
    cout<<"\n Addition is "<< z;
}
void add(char x, char y)
{
    cout<<"\n Addition is "<< x+y;
}

int main()
{
    short s1,s2;
    int a,i1,i2;
    float f1,f2;
    double d1,d2;
    long double ld1,ld2;
    long int li1,li2;
    char c1,c2,input;
   do{
   cout<<"Enter your choice for type of data for Addition\n";
   cout<<"1. short\n";
   cout<<"2. int\n";
   cout<<"3.float\n";
   cout<<"4.double\n";
   cout<<"5.long double\n";
   cout<<"6.long int\n";
   cout<<"7.char\n";
      cin>>a;
   switch(a)
   {
        case 1:  cout<<"Enter 2 values \n";
                cin>>s1>>s2;
                add(s1,s2);
                break;
        case 2:  cout<<"Enter 2 values \n";
                cin>>i1>>i2;
                add(i1,i2);
                break;
        case 3:  cout<<"Enter 2 values \n";
                cin>>f1>>f2;
                add(f1,f2);
                break;
        case 4:  cout<<"Enter 2 values \n";
                cin>>d1>>d2;
                add(d1,d2);
                break;
        case 5:  cout<<"Enter 2 values \n";
                cin>>ld1>>ld2;
                add(ld1,ld2);
                break;
        case 6:  cout<<"Enter 2 values \n";
                cin>>li1>>li2;
                add(li1,li2);
                break;
        case 7:  cout<<"Enter 1st value\n";
                cin>>c1;
                cout<<"Enter 2nd value\n";
                cin>>c2;
                add(c1,c2);
                break;
        default:
            cout<<"\nThe choice entered is a wrong choice ";

        }

       

        cout<<"\nAre you want to continue,please press y or Y "<<endl;

        cin>>input;

    }

    while(input=='y'||input=='Y');

}