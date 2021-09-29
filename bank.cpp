#include <iostream> 
using namespace std;

class Account                                      
{
 protected:
    string customername, acctype;
    double balance, minbalance = 1000, scharge= 100;
    long int accnumber;
 
 public:
    
void details()            
    {
        cout << "Account Name: " << customername << endl;
        cout << "Account Number: " << accnumber << endl;
        cout << "Account Type: " << acctype << endl;
    }
 
void display_bal()            //to Display the balance
   {
        cout << "Account Balance: ₹" << balance << endl;
   }

void deposit_amount()        //to Accept deposit from a customer 
{
 double amount;
 cout << "Enter Amount to be deposited:₹ "; 
 cin >> amount;
 if (amount>0)
 
    {
        balance = balance + amount;
        cout << "₹" << amount << " has been deposited in your account" << endl; 
    }
 
 else
 cout << "Amount entered is invalid.\nPlease Try Again" << endl;
}
 
void update_bal(double amount)      //to update the balance
 
 {
 balance = balance - amount;
 cout << "₹" << amount <<" has been deducted from account" << endl;
 }
 
void withdraw_amount()          //to Permit withdrawal and update the balance
{
    double amount;
    char option;
    cout << "Enter Amount to be withdrawn:₹ "; 
    cin >> amount;
    
    if (amount>0)
    {                                            
     if (balance >= amount)
    {
     if (acctype == "Current")
    {
 
  if (balance-amount > minbalance)
 update_bal(amount);             
 
 else
 {                           //to impose service charge and update the balance
    cout << "After withdrawal, your balance will fall below the minimum required balance.\n\
A service charge of ₹100 per month will be imposed. Press Y if you wish to continue\n ";
    cin >> option;
    
 if (option == 'Y')                            
 update_bal(amount+scharge);
 else
 cout << "Transaction has been aborted" << endl;
 }
 }
else
 update_bal(amount);      
 }
 else
 cout << "Insufficient Balance" << endl;  
 }
 else
 cout << "Amount entered is invalid.\nPlease Try Again" << endl;
 }
};

class curr_acct : public Account
 {
  bool cheque_facility = true;                  //cheque facility
public:
 curr_acct(string name, long int accnumber, double bal)
    {
        this->customername = name;
        this->accnumber = accnumber;
        this->acctype = "Current";
        this->balance = bal;
    }
};

class sav_acct : public Account      
{
 bool cheque_facility = false;
 double interestrate = 0.035;
public:
 sav_acct(string name, long int accnumber, double bal)
{
 this->customername = name;
 this->accnumber = accnumber;
 this->acctype = "Savings";
 this->balance = bal;
}
 
 void cal_interest()                         //to Compute and deposit interest

{ 
 string deposit;
 double interest = this->balance*interestrate;
 cout << "Interest amount: ₹" << interest << endl;
 cout << "Type 'Deposit' to deposit interest into account" << endl;
 cin >> deposit;
 if (deposit == "Deposit") 
  {   
    this->balance = balance + interest;
    cout << "Interest has been deposited to this account" << endl;
  }
 }
};

int main()                          
{
    curr_acct c_acc("Omi1", 56789, 65431);             
    sav_acct s_acc("Omi2", 65432, 687654);
    int acc_sel, option;                              //user interface
    cout <<"BANK\n\n" << "Select account type:\n1) Current Account\n2) Savings Account\n " ;
    cin >> acc_sel;
    cout << "\nSelect an Option:\n0) Exit menu\n1) View Account Details\n\
2) View Account Balance\n3) Withdraw Funds\n4) Deposit Funds" <<
            ( (acc_sel==2) ? "\n5) Calculate Interest\n" : "\n" ) << endl;      
                                    
                                    
 
 
 do
 {
 cin >> option;
 switch(option)
 {                                    
 case 0:
 break;
 case 1:
 (acc_sel==1)? c_acc.details():s_acc.details(); 
 break;
 case 2:
 (acc_sel==1)? c_acc.display_bal():s_acc.display_bal();
 break;
 case 3:
 (acc_sel==1)? c_acc.withdraw_amount():s_acc.withdraw_amount(); 
 break;
 case 4:
 (acc_sel==1)? c_acc.deposit_amount():s_acc.deposit_amount(); 
 break;
 case 5:
 if (acc_sel==2)
  {
    s_acc.cal_interest(); 
    break;
  }
 default:
 cout << "Option selected is invalid.\nPlease Try Again" << endl;
 }
 cout << endl;
 }
 while (option!=0);
 return 0;
}