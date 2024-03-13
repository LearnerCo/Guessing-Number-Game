#include <iostream>
#include <cstdio>
#include <string>
#include <random>
using namespace std;

//int const feet_to_inches = 12;
//double const inch_to_cm = 2.54;

//void main() {
//	double feet;
//	double inch;
//	double cm;
//	cout << "Please enter your feet: ";
//	cin >> feet;
//	cout << endl;
//	cout << "Please enter your inch: ";
//	cin >> inch;
//	cout << endl;
//	inch = inch + (feet * feet_to_inches);
//
//	cm = inch * inch_to_cm;
//	cout << "Your cm is " << cm;
//}

//Part A Question 1
//int main() {
//	string name, gender, address;
//	int age=0, amount=0;
//
//	cout << "Student Name: ";
//	cin >> name;
//	cout << endl;
//
//	cout << "Student Gender: ";
//	cin >> gender;
//	cout << endl;
//
//	cout << "Student Age: " ;
//	cin >> age;
//	cout << endl;
//
//	cout << "Student Address: ";
//	cin >> address;
//	cout << endl;
//
//	cout << "E-Wallet Amount: ";
//	cin >> amount;
//	cout << endl;
//
//	cout << "======================================================================="<<endl;
//	cout << "|   Name   |   Gender   |   Age   |     Address   |  E-Wallet Amount  |"<<endl;
//	cout << "======================================================================="<<endl;
//	cout << "|\t"<<name<<"\t|\t"<<gender<<"\t|\t"<<age<<"\t|\t"<<address<<"\t|\t\t"<<amount<<"|\t\t"<<endl;
//	cout << "=======================================================================" << endl;
//}

//Q2
//void main() {
//	string name, gender, address;
//	int age =0;
//	double amount = 0.00;
//	char a;
//
//	cout << "Student Name				:";
//	cin >> name;
//	cout << endl;
//
//	cout << "Student Gender				:";
//	cin >> gender;
//	cout << endl;
//
//	cout << "Student Age				:";
//	cin >> age;
//	cout << endl;
//
//	cout << "Student Home Address			:";
//	cin >> address;
//	cout << endl;
//
//	cout << "E-Wallet Amount				:";
//	cin >> amount;
//	cout << endl;
//
//	cout << "Press any key to continue . . .";
//	//getchar();
//	cin.get(a);
//	cout << endl;
//
//	cout << "======================================"<<endl;
//	cout << "| Student Details as below:           |" << endl;
//	cout << "=======================================" << endl;
//	cout << "|Name	:						" << name;
//	cout << endl;
//	cout << "|Age		:					" << age;
//	cout << endl;
//	cout << "|Gender  :						" << gender;
//	cout << endl;
//	cout << "|Adress	:						" << address;
//	cout << endl;
//	cout << "E-Wallet:RM						"<< amount;
//	cout << endl;
//	cout << "==========================================";
//}

//Q3
//int main() {
//
//	int a = 0, b = 0, c = 0,second;
//	char x, y;
//	cout << "Please enter your elapsed time(in HH:MM:SS format) = ";
//	cin >> a >> x >> b >> y >> c;
//	
//	if (a <= 24 && b <= 60 && c <= 60) {
//		 second = a * 3600 + b * 60 + c;
//	}
//	else {
//		cout << "Invalid Input!";
//	}
//
//	if (x == ':' && y == ':') {
//		cout << "Elaspsed time is: " << second;
//	}
//	else {
//		cout << "Invalid input!";
//	}
//}

//Q4
void main() {
	int a = 1, b = 100, c = 0;
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dis(1, 100);
	int d = dis(gen);
	//int d = rand() % (b - a ); // Generate random target number
	cout << "Guess Number Game Started Now!";
	cout << endl;
	cout << "---------------------------------" << endl;

	while (c != d) {

		cout << "Guess Number between " << a << " to " << b;
		cout << endl;
		cout << "Your answer: "; //ans is 20
		cin >> c;
		cout << endl;

		if (c>d) {
			b = c;
		}
		else {
			a = c;
		}
	}
	cout << "Congratulation! You Won!";
}