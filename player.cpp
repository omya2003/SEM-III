#include <stdio.h>
#include <iostream>
using namespace std;

class Player
{
    public:
    char name[40];
    char region[20];
    float batavg,ballavg;

    void readData()
    {
        cout<<"enter name of player:\n";
        cin>>name;
        cout<<"enter region of player\n";
        cin>>region;
        cout<<"enter batting average\n";
        cin>>batavg;
        cout<<"enter balling average\n";
        cin>>ballavg;
    }
   void generateList(Player obj[], int size)
    {
		cout<<"\nGeneral List \n";
      for (int i = 0; i < size; i++) 
      {
        if ( obj[i].batavg > 30 && obj[i].ballavg < 25 )
        { 
        cout<<"\nPlayer name: "<<obj[i].name<<"  Player region: "<<obj[i].region;
	    }		
     }
    }
    void sortList(Player obj1[], int size)
    {
        
        //int n= sizeof(obj.batavg)/sizeof(obj[0].batavg);
        //cout<<"\nsize :"<<n;
        //sort(obj.batavg,obj.batavg +n);
        
      int i,j;
      Player temp;

		for(i=0;i<size;i++)
	{		
		for(j=i+1;j<size;j++)
		{
			if(obj1[i].batavg>obj1[j].batavg)
			{
				temp  = obj1[i];
				obj1[i]=obj1[j];
				obj1[j]=temp;
			}
			//cout<<"\n temp : "<<temp<<"i value : "<<obj1[i].batavg;
		}
	}
	
	cout<<"\n sorted List as per batting average \n";
	displayList(obj1,size);
		
   for(i=0;i<size;i++)
	{		
		for(j=i+1;j<size;j++)
		{
			if(obj1[i].ballavg>obj1[j].ballavg)
			{
				temp  = obj1[i];
				obj1[i]=obj1[j];
				obj1[j]=temp;
				
			}
		}
	}
	
	cout<<"\n sorted List as per bowling average \n"; 
	displayList(obj1,size);
	
	}
	
	void displayList(Player ob[],int size)
	{
		for(int i=0;i<size;i++)
		cout<<"\nPlayer name: "<<ob[i].name<<"  Player region: "<<ob[i].region;	
	}
	
		
	     
};

int main()
{   
    int i,pos;
    Player p[3],p1,p2;
    for(i=0;i<3;i++)
    {
     p[i].readData();
    }
    p1.generateList(p,3);
    p2.sortList(p,3);
    return 0;
}