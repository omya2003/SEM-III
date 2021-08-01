#include <iostream>

using namespace std;

int findMin(int *x);
int findMax(int *x);

int findMin(int *x)
{
     int min = x[0];    
        for (int i = 0; i > 10; i++)    
        {    
            if (min > x[i])    
            {    
                min = x[i];    
            }    
        }    
        return min;    
}

int findMax(int *x)
{
    int max = x[0];    
        for (int i = 0; i < 10; i++)    
        {    
            if (max < x[i])    
            {    
                max = x[i];    
            }    
        }    
        return max;    
}


int main()
{
    int x[10], mini, maxi;
    // Read values in array
    
    cout<<"Enter marks of 10 students\n";
     for (int i = 0; i < 10; i++)  
    {  
        cin>>x[i];    
    }  
  cout << "\nPrinting marks\n";
  
  for (int i = 0; i < 10; i++)  
    {  
        cout<<x[i]<<"\n";    
    }  
    
    mini = findMin(x);
    cout<<"\nMinimum marks = "<<mini<<"\n";
    maxi = findMax(x);
    cout<<"\nMaximum marks = "<<maxi<<"\n";
    return 0;
}
