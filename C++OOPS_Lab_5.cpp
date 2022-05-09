#include<iostream>
using namespace std;

class Account
{
    private:
    double current_balance;
    public:
    Account(): current_balance(0) {} //Default constructor called to initialize data member
    //Member functions to deposit and withdraw money, and calculate interest.
    void check_balance() {cout << "Current Balance: " << current_balance << endl;}
    void deposit_money(double deposit) {current_balance = current_balance + deposit; cout << "Money deposited successfully!!" << endl;}
    void withdraw_money(double withdraw)
    {
        if (withdraw <= current_balance)
        {
            current_balance = current_balance - withdraw;
            cout << "Money withdrawn successfully!!" << endl;
        }
        else
            cout << "Insufficient Balance!!" << endl;
    }
    void calculate_interest(int rate, int time) {cout << "Interest: " << (current_balance*rate*time)/100 << endl;}
};

//Variables declared as global so that any function can access it and they don't get initialized again.
int choice;
double amount;
Account A1;

//Global function for Customer UI
int ui()
{
    cout << "\nEnter any choice to get started: ";
    cin >> choice;
    switch(choice)
    {
        case 1: A1.check_balance(); break;
        case 2: cout << "Enter the amount you want to deposit: ";
                cin >> amount; A1.deposit_money(amount); break;
        case 3: cout << "Enter the amount you want to withdraw: ";
                cin >> amount; A1.withdraw_money(amount); break;
        case 4: A1.calculate_interest(5,3); break;
        case 5: return -1;
        default: cout << "Wrong option!!";
    }
    //Calling the function itself so that any other operation can be done on the current values.
    ui();
    return 0;
}

//Main function
int main()
{
    cout << "Bank Account Details:" << endl;
    cout << "1. Check current balance\n2. Deposit money\n3.Withdraw money\n4. Calculate interest\n5. Quit" << endl;
    ui(); //Calling the global Customer UI function.
    return 0;
}