/*
2.	Redo Programming Project 1 (or do it for the first time), but this time
make the student record type a class type rather than a structure type. The
student record class should have member variables for all the input data
described in Programing Project 1 and a member variable for the student’s
weighted average numeric score for the entire course as well as a member
variable for the student’s final letter grade. Make all member variables pri-
vate. Include member functions for each of the following: member func-
tions to set each of the member variables to values given as an argument(s)
to the function, member functions to retrieve the data from each of the
member variables, a void function that calculates the student’s weighted
average numeric score for the entire course and sets the corresponding
member variable, and a void function that calculates the student’s final
letter grade and sets the corresponding member variable.
*/

#include <iostream>
using namespace std;

class StudentRecord {
    private:
        int quizz1;
        int quizz2;
        int midtermExam;
        int finalExam;
        double average;
        char finalGrade;
    public:
        //Constructor
        StudentRecord() : quizz1(0), quizz2(0), midtermExam(0), finalExam(0), average(0), finalGrade('F') {}
        //Mutators
        void setQuizz1(int n) {quizz1 = n;}
        void setQuizz2(int n) {quizz2 = n;}
        void setMidtermExam(int n) {midtermExam = n;}
        void setFinalExam(int n) {finalExam = n;}
        void setFinalGrade (char c) {finalGrade = c;}
        //Accessors;
        int getQuizz1() {return quizz1;}
        int getQuizz2() {return quizz2;}
        int getMidtermExam() {return midtermExam;}
        int getFinalExam() {return finalExam;}
        double getAverage() {return average;}
        char getFinalGrade() {return finalGrade;}
        //Calculates the average and set the final grade accordingly.
        void calculateAverage();
};

void StudentRecord::calculateAverage() {

    double quizzesTotal = quizz1 + quizz2;
    double midtermExamTotal = midtermExam;
    double finalExamTotal = finalExam;

    quizzesTotal *= 1.25;
    midtermExamTotal /= 4;
    finalExamTotal /= 2;
    average = quizzesTotal + midtermExamTotal + finalExamTotal;


    if (average >= 90) {
        finalGrade = 'A';
    }
    else if (average >= 80) {
        finalGrade = 'B';
    }
    else if (average >= 70) {
        finalGrade = 'C';
    }
    else if (average >= 60) {
        finalGrade = 'D';
    }
    else finalGrade = 'F';
}

void outputResults(StudentRecord S) {
    cout << "Your grades are as follow:" << endl;
    cout << "Quizz 1: " << S.getQuizz1() << endl;
    cout << "Quizz 2: " << S.getQuizz2() << endl;
    cout << "Midterm Exam: " << S.getMidtermExam() << endl;
    cout << "Final Exam: " << S.getFinalExam() << endl;
    S.calculateAverage();
    cout << "Your final average is: " << S.getAverage() << endl;
    cout << "Your final grade is: " << S.getFinalGrade() << "." << endl;
}


int main() {
    int n;
    StudentRecord S;
    cout << "Enter the scores for: " << endl;
    cout << "Quizz 1: ";
    cin >> n;
    S.setQuizz1(n);
    cout << "Quizz 2: ";
    cin >> n;
    S.setQuizz2(n);
    cout << "Midterm Exam: ";
    cin >> n;
    S.setMidtermExam(n);
    cout << "Final Exam: ";
    cin >> n;
    S.setFinalExam(n);
    cout << endl;
    outputResults(S);
    return 0;
}