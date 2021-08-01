#include<iostream>
using namespace std;

float shape(float a);
float shape(float c, float g);
double shape(double j);
double shape(double h, double f);

float  shape(float a)
{
    float vol;
        vol= a*a*a;
        return vol;
}
float shape(float c, float g)
{
        float vol;
        vol=3.14*c*c*(g/3);
        return vol;
}
double shape(double j)
{
        double vol;
        vol=(4*3.14*j*j*j)/3;
        return vol;
}
double shape(double h, double f)
{
    double vol;
      vol=3.14*f*f*h;
      return vol;
}
int main()
{
        
        float a,c,op;
        int ch;
        float g;
        double f,j,op1,h;
        char input;
        
        do
        {
        cout<<"\tCALCULATION OF VOLUME";
        cout<<"\n\n1.  Volume of the cube";
        cout<<"\n2. Volume of the cone";
        cout<<"\n3. Volume of the sphere";
        cout<<"\n4.  Volume of the cylinder";
        cout<<"\n\tEnter your choice ";
        cin>>ch;
        switch(ch)
        {
                case 1:
                        cout<<"\nenter the length of side of cube ";
                        cin>>a;
                        op=shape(a);
                        cout<<"\nVolume of the cube is "<< op;
                        break;
                case 2:
                        cout<<"\nEnter the radius of the cone ";
                        cin>>c;
                        cout<<"\nEnter the height of the cone ";
                        cin>>g;
                        op=shape(c,g);
                        cout<<"Volume of the cone is "<<op;
                        break;
                case 3:
                         cout<<"\nEnter the radius of sphere ";
                        cin>>j;
                        op1=shape(j);
                        cout<<"\nVolume of the sphere is "<<op1;
                        break;
                        
                case 4:
                        cout<<"\nEnter the radius of cylinder ";
                        cin>>f;
                        cout<<"\nEnter the height of cylinder ";
                        cin>>h;
                        op1=shape(h,f);
                        cout<<"\nVolume of the Cylinder is "<<op1;
                        break;
                
                
                
                default:
                        cout<<"\nThe choice entered is a wrong choice ";
        }
        
        cout<<"\nAre you want to continue,please press y or Y "<<endl;
		cin>>input;

	}
	while(input=='y'||input=='Y');
       
}