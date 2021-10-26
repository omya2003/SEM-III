#include <iostream>
#include <string> // Needed to use strings
#include <cstdlib> // Needed to use random numbers
#include <ctime>
#include "rot.h"
using namespace std;

void rot::rules()
{
    srand(time(0)); // "Seed" the random generator
    cout << "***************" << endl;
	cout << "ROULETTE " << endl; 
	cout << "***************" << endl;
    
    cout << "\n\nWhat's your Name : ";
    cin >> playerName;
    cout << "\n\nEnter the starting balance to play game : $";
    cin >> balance;
    cout << "\t\t======ROULETTE RULES!======\n";
    cout << "\t1. Choose a number between 1 to 10\n";
    cout << "\t2. Winner gets 3 times of the money bet\n";
    cout << "\t3. Wrong bet, and you lose the amount you bet\n\n";
}

void rot::dis()
{ 
    do
    {
       
        cout << "\n\nYour current balance is $ " << balance << "\n";// Get player's betting balance
        do
        {
            cout << "Hey, " << playerName<<", enter amount to bet : $";
            cin >> bettingAmount;
            if(bettingAmount > balance)
                cout << "Betting balance can't be more than current balance!\n"
                       <<"\nRe-enter balance\n ";
        }while(bettingAmount > balance);// Get player's numbers
        do
        {
            cout << "Guess any betting number between 1 & 10 :";
            cin >> guess;
            if(guess <= 0 || guess > 10)
                cout << "\nNumber should be between 1 to 10\n"
                    <<"Re-enter number:\n ";
        }while(guess <= 0 || guess > 10);
        dice = rand()%10 + 1;
        if(dice == guess)
        {
            cout << "\n\nYou are in luck!! You have won Rs." << bettingAmount * 10;
            balance = balance + bettingAmount * 3;
        }
        else
        {
            cout << "Oops, better luck next time !! You lost $ "<< bettingAmount <<"\n";
            balance = balance - bettingAmount;
        }
        cout << "\nThe winning number was : " << dice <<"\n";
        cout << "\n"<<playerName<<", You have balance of $ " << balance << "\n";
        if(balance == 0)
        {
            cout << "You have no money to play ";
            break;
        }
        cout << "\n\n-->Do you want to play again (y/n)? ";
        cin >> choice;
    }while(choice =='Y'|| choice=='y');
    cout << "\n\n\n";
    cout << "\n\nThanks for playing the game. Your balance is $ " << balance << "\n\n";
}
 