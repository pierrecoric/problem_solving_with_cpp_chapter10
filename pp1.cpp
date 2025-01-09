/*
Redefine CDAccount from Display 10.1 so that it is a class rather than a
structure. Use the same member variables as in Display 10.1 but make
them private. Include member functions for each of the following: one
to return the initial balance, one to return the balance at maturity, one to
return the interest rate, and one to return the term. Include a constructor
that sets all of the member variables to any specified values, as well as a
default constructor. Embed your class definition in a test program.
*/

#include <iostream>
using namespace std;


class CDAccount {
    private:
        double balance;
        double interest_rate;
        double interest;
        int term;
        double rate_fraction();
    
    public:
        //Constructor
        CDAccount(double new_balance, double new_interest_rate, int new_term);
        CDAccount();
        //Accessors
        double get_balance() {return balance;}
        double get_rate() {return interest_rate;}
        double get_interest() {return interest;}
        int get_term() {return term;}
        //Mutators
        void set_balance(double new_balance);
        void set_rate(double new_rate);
        void set_interest(double new_interest);
        void set_term(int new_term);
        //Functions
        void update_balance();
};


int main() {
    CDAccount A;
    cout << "Enter account balance: ";
    double input_balance;
    cin >> input_balance;
    A.set_balance(input_balance);

    cout << "Enter interest rate: ";
    double input_rate;
    cin >> input_rate;
    A.set_rate(input_rate);

    cout << "Enter the amount of months before maturity: ";
    int input_term;
    cin >> input_term;
    A.set_term(input_term);

    cout << "The initial balance of your account is " << A.get_balance() << endl;
    A.update_balance();
    cout << "After " << A.get_term() << " months, your balance will be " << A.get_balance() << endl;

    return 0;
}

//Constructor
CDAccount::CDAccount(double new_balance, double new_interest_rate, int new_term) {
    balance = new_balance;
    interest_rate = new_interest_rate;
    term = new_term;
}
//Constructor with no formal parameter
CDAccount::CDAccount() {
    balance = 0;
    interest_rate = 0;
    term = 0;
}

double CDAccount::rate_fraction() {
    return interest_rate / 100;
}

void CDAccount::set_balance(double new_balance) {
    balance = new_balance;
}

void CDAccount::set_rate(double new_rate) {
    interest_rate = new_rate;
}

void CDAccount::set_interest(double new_interest) {
    interest = new_interest;
}

void CDAccount::set_term(int new_term) {
    term = new_term;
}

void CDAccount::update_balance() {
    interest = balance * rate_fraction() * (term / 12.0);
    balance = balance + interest;
}