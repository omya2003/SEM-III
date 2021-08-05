#include <iostream>
using namespace std;

void INPUT(string name, int rollno, string division="A", string program="BTech")
{
    cout <<name<<" : "<< rollno << "   :   "<<division<<"    :   "<<program<<"\n";
}

 
int main()
{
    cout << "Name:Roll no:Division:Program " <<"\n";
    INPUT("Ram1",1);
    INPUT("Ram2",2);
    INPUT("Ram3",3);
    return 0;

}