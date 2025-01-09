/*
1. Write a grading program for a class with the following grading policies:
a. There are two quizzes, each graded on the basis of 10 points.
b. There is one midterm exam and one final exam, each graded on the
basis of 100 points.
c. The final exam counts for 50 percent of the grade, the midterm counts
for 25 percent, and the two quizzes together count for a total of 25
percent. (Do not forget to normalize the quiz scores. They should be
converted to a percent before they are averaged in.)
Any grade of 90 or more is an A, any grade of 80 or more (but less than
90) is a B, any grade of 70 or more (but less than 80) is a C, any grade of
60 or more (but less than 70) is a D, and any grade below 60 is an F.
The program will read in the student’s scores and output the student’s
record, which consists of two quiz and two exam scores as well as the
student’s average numeric score for the entire course and the final letter
grade. Define and use a structure for the student record. If this is a class
assignment, ask your instructor if input/output should be done with the
keyboard and screen or if it should be done with files. If it is to be done
with files, ask your instructor for instructions on file names.
*/

#include <iostream>
using namespace std;

struct Grades {
    int quizz1;
    int quizz2;
    int midtermExam;
    int finalExam;
};

void outputResults(Grades g) {
    cout << "your grades are as follow: " << endl;
    cout << "Quizz 1: " << g.quizz1 << endl;
    cout << "Quizz 2: " << g.quizz2 << endl;
    cout << "Midterm Exam: " << g.midtermExam << endl;
    cout << "Final Exam: " << g.finalExam << endl;

    double quizzesTotal = g.quizz1 + g.quizz2;
    double midtermExamTotal = g.midtermExam;
    double finalExamTotal = g.finalExam;

    quizzesTotal *= 1.25;
    midtermExamTotal /= 4;
    finalExamTotal /= 2;
    double total = quizzesTotal + midtermExamTotal + finalExamTotal;

    cout <<"Your total average is: " << total << endl;
    cout <<"Your grade is: ";
    if (total >= 90) {
        cout << "A.";
    }
    else if (total >= 80) {
        cout << "B.";
    }
    else if (total >= 70) {
        cout << "C.";
    }
    else if (total >= 60) {
        cout << "D.";
    }
    else cout << "F.";
    cout << endl;
}


int main() {
    Grades g;
    cout << "Enter the scores for: " << endl;
    cout << "Quizz 1: ";
    cin >> g.quizz1;
    cout << "Quizz 2: ";
    cin >> g.quizz2;
    cout << "Midterm Exam: ";
    cin >> g.midtermExam;
    cout << "Final Exam: ";
    cin >> g.finalExam;
    cout << endl;
    outputResults(g);
    return 0;
}