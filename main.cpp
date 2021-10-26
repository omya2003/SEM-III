/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include "rot.h"
#include "slots.h"
#include "blackjack.h"
#include "poker.h"
using namespace std;

int main()
{
   int x;
   rot r1;
   blackjack b1;
   poker p1;
   char c, c1;
    cout << "\n\n\n\n\n";
    cout << "\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n";
    cout << "\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
    cout << "\n\t\t\t        =                                           =";
    cout << "\n\t\t\t        =                    WELCOME                =";
    cout << "\n\t\t\t        =                      TO                   =";
    cout << "\n\t\t\t        =                 OMI's CASINO              =";
    cout << "\n\t\t\t        =                                           =";
    cout << "\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
    cout << "\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n";
    do{
    cout << "\n\n\n\t\t\t Select Game:";
    cout << "\n\t\t\t 1.Roulette";
    cout << "\n\t\t\t 2.Slots";
    cout << "\n\t\t\t 3.Blackjack";
    cout << "\n\t\t\t 4.Poker\n\t\t\tselect corresponding number:";
    cin >> x;
    
    
    if(x==1){ r1.rules();
                r1.dis();}
                
    if(x==2){
                cout << "***************" << endl;
	            cout << "SLOTS" << endl; 
	            cout << "***************" << endl;
            	// Create our slot machine
            	Machine *slotmachine = new Machine();
            
            	// Insert a five
            	slotmachine->insertbill(5.00);
            
            	// Plus a coin for good luck
            	slotmachine->insertcoin();
            
            	// Go for it all and bet five lines
            	// Then spin!
            	do{
            	slotmachine->bet(5);
            	slotmachine->spin();
            	cout<<"Press Y or y to spin again: ";
            	cin>>c;
            	 //getch();
            	}
            	while(c=='Y' || c=='y');
    }
               
     if(x==3){b1.executeGame();}
     if(x==4){p1.playGame();}
     if(x<1 || x >4) { cout<<"wrong choice";}
     
     cout << "\n\n-->Do you want to play another game (y/n)? ";
        cin >> c1;
    }while(c1 =='Y'|| c1=='y');
    cout << "\n";
    cout << "\n\nThanks for playing the game." << "\n\n";
    
}
    
