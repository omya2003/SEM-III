#include <iostream>
using namespace std;

inline float cube(float a)
{
    return a*a*a;
}
inline float cone(float c, float g)
{ 
    return 3.14*c*c*(g/3);
}
inline double sphere(double j)
{
    return (4*3.14*j*j*j)/3;
}
inline double cylinder(double h, double f)
{
   return 3.14*f*f*h;
}
 
int main()
{
    cout << "The volume of cube of side 3 is: " << cube(3) << "\n";
    cout << "The volume of cone of radius 3 and height 7 is: " << cone(3,7) << "\n";
    cout << "The volume of sphere of radius 3 is: " << sphere(3) << "\n";
    cout << "The volume of cylinder of radius 3 and height 7 is: " << cylinder(3,7) << "\n";
    return 0;

}