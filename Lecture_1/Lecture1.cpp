#include <iostream>
#include <cstdio>
#include <string>
#include <random>
using namespace std;


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
