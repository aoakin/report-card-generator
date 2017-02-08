#include <iostream> //cout, cin
#include <string>

using namespace std;

int main()
{
	
	int menuChoice;

	string studentFirstName;
	string studentLastName;

	double grade1;
	string letterGrade1;
	double grade2;
	string letterGrade2;
	double grade3;
	string letterGrade3;
	double grade4;
	string letterGrade4;
	double grade5;
	string letterGrade5;
	double grade6;
	string letterGrade6;
	double avgGrade;
	double gpa;

	startMenu: {
		cout << "REPORT CARD GENERATOR\n";
		cout << "===========================================\n";
	}
	startMenuInput: {
		cout << "(1) START REPORT CARD (2) EXIT\n";
		cout << "Input: ";
		cin >> menuChoice;
		}
	if (menuChoice == 1) {
		goto gradeInput;
	}
	else if (menuChoice == 2) {
		return 0;
	}
	else {
		goto startMenuInput;
	}
  // takes input for names and grade percentages for each classs
	gradeInput: {
		cout << "STUDENT LAST NAME: ";
		cin >> studentLastName;
		cout << "STUDENT FIRST NAME: ";
		cin >> studentFirstName;
		cout << "Period 1 GRADE PERCENT: ";
		cin >> grade1;
			if ((grade1>=90) && (grade1<=100)){
				 letterGrade1 = "A";
			}
			else if ((grade1>=80) && (grade1<90)){
				 letterGrade1 = "B";
			}
			else if ((grade1>=70) && (grade1<80)){
				 letterGrade1 = "C";
			}
			else if ((grade1>50) && (grade1<70)){
				 letterGrade1 = "D";
			}
			else if ((grade1>=0) && (grade1<=50)){
				 letterGrade1 = "F";
			}
		cout << "Period 2 GRADE PERCENT: ";
		cin >> grade2;
			if ((grade2>=90) && (grade2<=100)){
				 letterGrade2 = "A";
			}
			else if ((grade2>=80) && (grade2<90)){
				 letterGrade2 = "B";
			}
			else if ((grade2>=70) && (grade2<80)){
				 letterGrade2 = "C";
			}
			else if ((grade2>50) && (grade2<70)){
				 letterGrade2 = "D";
			}
			else if ((grade2>=0) && (grade2<=50)){
				 letterGrade2 = "F";
			}
		cout << "Period 3 GRADE PERCENT: ";
		cin >> grade3;
			if ((grade3>=90) && (grade3<=100)){
				 letterGrade3 = "A";
			}
			else if ((grade3>=80) && (grade3<90)){
				 letterGrade3 = "B";
			}
			else if ((grade3>=70) && (grade3<80)){
				 letterGrade3 = "C";
			}
			else if ((grade3>50) && (grade3<70)){
				 letterGrade3 = "D";
			}
			else if ((grade3>=0) && (grade3<=50)){
				 letterGrade3 = "F";
			}
		cout << "Period 4 GRADE PERCENT: ";
		cin >> grade4;
			if ((grade4>=90) && (grade4<=100)){
				 letterGrade4 = "A";
			}
			else if ((grade4>=80) && (grade4<90)){
				 letterGrade4 = "B";
			}
			else if ((grade4>=70) && (grade4<80)){
				 letterGrade4 = "C";
			}
			else if ((grade4>50) && (grade4<70)){
				 letterGrade4 = "D";
			}
			else if ((grade4>=0) && (grade4<=50)){
				 letterGrade4 = "F";
			}
		cout << "Period 5 GRADE PERCENT: ";
		cin >> grade5;
			if ((grade5>=90) && (grade5<=100)){
				 letterGrade5 = "A";
			}
			else if ((grade5>=80) && (grade5<90)){
				 letterGrade5 = "B";
			}
			else if ((grade5>=70) && (grade5<80)){
				 letterGrade5 = "C";
			}
			else if ((grade5>50) && (grade5<70)){
				 letterGrade5 = "D";
			}
			else if ((grade5>=0) && (grade5<=50)){
				 letterGrade5 = "F";
			}
		cout << "Period 6 GRADE PERCENT: ";
		cin >> grade6;
			if ((grade6>=90) && (grade6<=100)){
				 letterGrade6 = "A";
			}
			else if ((grade6>=80) && (grade6<90)){
				 letterGrade6 = "B";
			}
			else if ((grade6>=70) && (grade6<80)){
				 letterGrade6 = "C";
			}
			else if ((grade6>50) && (grade6<70)){
				 letterGrade6 = "D";
			}
			else if ((grade6>=0) && (grade6<=50)){
				 letterGrade6 = "F";
			}
		avgGrade = (grade6+grade5+grade4+grade3+grade2+grade1)/6;
		gpa = (avgGrade/20)-1;
		goto reportCard; 
	}
  // Makes a report card for the student
	reportCard: {
		cout << "\n\nREPORT CARD FOR " << studentLastName << ", " << studentFirstName << endl;
		cout << "======================\n";
		cout << "P.1 GRADE|  " << grade1 << "   " << letterGrade1 << "|\n";
		cout << "P.2 GRADE|  " << grade2 << "   " << letterGrade2 << "|\n";
		cout << "P.3 GRADE|  " << grade3 << "   " << letterGrade3 << "|\n";
		cout << "P.4 GRADE|  " << grade4 << "   " << letterGrade4 << "|\n";
		cout << "P.5 GRADE|  " << grade5 << "   " << letterGrade5 << "|\n";
		cout << "P.6 GRADE|  " << grade6 << "   " << letterGrade6 << "|\n";
		cout << "          ***\n";
		cout << "GPA: " << gpa << endl;
		cout << "======================";
	}
	return 0;
}
