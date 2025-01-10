/*
3. Define a class called Month that is an abstract data type for a month. Your
class will have one member variable of type int to represent a month
(1 for January, 2 for February, and so forth). 
Include all the following member functions: 

    a constructor to set the month using the first three letters in the name of the month as three arguments, 
    
    a constructor to set the month using an integer as an argument (1 for January, 2 for February, and so forth).

    a default constructor, 
    
    an input function that reads the month as an integer,

    an input function that reads the month as the first three letters in the name of the month, 
    
    an output function that outputs the month as an integer, 
    
    an output function that outputs the month as the first three letters in the name of the month, 
    
    and a member function that returns the next month as a value of type Month. 
     
    The input and output functions will each have one formal parameter for the stream. 
    
    Embed your class definition in a test program.
*/  

#include <iostream>
#include <string>
using namespace std;

class Month {
    private:
        int month;
    public:
        //Constructors:
        //Constructor that takes three characters as parameters.
        Month(char first, char second, char third);
        //Constructor taking an int as formal parameter.
        Month(int n) {month = n;}
        //Default constructor.
        Month() : month(1) {}

        //Input functions:
        //Reads the month as an integer
        void setMonthInt(int n) {month = n;}
        void setMonthString(string s);

        //Output functions:
        int getMonthInt() {return month;}
        string getMonthString();
        Month returnMonth();

};

//Constructor that takes character as parameter
Month::Month(char first, char second, char third) {
    //Would be nice to capitalize them all.
    //JAN - 1
    if(first == 'J' && second == 'A' && third == 'N') {
        month = 1;
    }
    //FEB - 2
    else if(first == 'F' && second == 'E' && third == 'B') {
        month = 2;
    }
    //MAR - 3
    else if(first == 'M' && second == 'A' && third == 'R') {
        month = 3;
    }
    //APR - 4
    else if(first == 'A' && second == 'P' && third == 'R') {
        month = 4;
    }
    //MAY - 5
    else if(first == 'M' && second == 'A' && third == 'Y') {
        month = 5;
    }
    //JUN - 6
    else if(first == 'J' && second == 'U' && third == 'N') {
        month = 6;
    }
    //JUL - 7
    else if(first == 'J' && second == 'U' && third == 'L') {
        month = 7;
    }
    //AUG - 8
    else if(first == 'A' && second == 'U' && third == 'G') {
        month = 1;
    }
    //SEP - 9
    else if(first == 'S' && second == 'E' && third == 'P') {
        month = 9;
    }
    //OCT - 10
    else if(first == 'O' && second == 'C' && third == 'T') {
        month = 10;
    }
    //NOV - 11
    else if(first == 'N' && second == 'O' && third == 'V') {
        month = 11;
    }
    //DEC - 12
    else if(first == 'D' && second == 'E' && third == 'C') {
        month = 12;
    }
}

void Month::setMonthString(string s) {
    char first = s.at(0);
    char second = s.at(1);
    char third = s.at(2);
    //JAN - 1
    if(first == 'J' && second == 'A' && third == 'N') {
        month = 1;
    }
    //FEB - 2
    else if(first == 'F' && second == 'E' && third == 'B') {
        month = 2;
    }
    //MAR - 3
    else if(first == 'M' && second == 'A' && third == 'R') {
        month = 3;
    }
    //APR - 4
    else if(first == 'A' && second == 'P' && third == 'R') {
        month = 4;
    }
    //MAY - 5
    else if(first == 'M' && second == 'A' && third == 'Y') {
        month = 5;
    }
    //JUN - 6
    else if(first == 'J' && second == 'U' && third == 'N') {
        month = 6;
    }
    //JUL - 7
    else if(first == 'J' && second == 'U' && third == 'L') {
        month = 7;
    }
    //AUG - 8
    else if(first == 'A' && second == 'U' && third == 'G') {
        month = 1;
    }
    //SEP - 9
    else if(first == 'S' && second == 'E' && third == 'P') {
        month = 9;
    }
    //OCT - 10
    else if(first == 'O' && second == 'C' && third == 'T') {
        month = 10;
    }
    //NOV - 11
    else if(first == 'N' && second == 'O' && third == 'V') {
        month = 11;
    }
    //DEC - 12
    else if(first == 'D' && second == 'E' && third == 'C') {
        month = 12;
    }
}

//Output the month as string.
string Month::getMonthString() {
    if(month == 1) {
        return "JAN";
    }
    else if (month == 2) {
        return "FEB";
    }
    else if (month  == 3) {
        return "MAR";
    }
    else if (month  == 4) {
        return "APR";
    }
    else if (month  == 5) {
        return "MAY";
    }
    else if (month  == 6) {
        return "JUN";
    }
    else if (month  == 7) {
        return "JUL";
    }
    else if (month  == 8) {
        return "AUG";
    }
    else if (month  == 9) {
        return "SEP";
    }
    else if (month  == 10) {
        return "OCT";
    }
    else if (month  == 11) {
        return "NOV";
    }
    else if (month  == 12) {
        return "DEC";
    }
    else {
        return "ERR";
    }
}

Month Month::returnMonth() {
    Month temp;
    if(month == 12) {
        temp.setMonthInt(1);
    }
    else temp.setMonthInt(month + 1);
    return temp;
}


int main() {
    Month m;
    int n;
    cout << "Enter month int: ";
    cin >> n;
    m.setMonthInt(n);
    cout << "You entered the month of " << m.getMonthString() << endl;

    Month next = m.returnMonth();
    cout << "The next month is " << next.getMonthString() << endl;

    cout << "Enter month first chars: ";
    string s = "JAN";
    cin.ignore();
    getline(cin, s);
    m.setMonthString(s);
    cout << "You entered the mont number " << m.getMonthInt() << endl;
    return 0;
}