#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void rsp() {
	int win = 0, lose = 0, draw = 0;

	for (int a = 0; a < 5; a++) {
		cout << "ROCK SCISSORS PAPER GAME : SCISSORS=0, ROCK=1, PAPER=2" << endl;
		cout << "GAME : " << (a + 1) << endl;

		int choice = 0; //
		cin >> choice;

		//
		srand(time(NULL));
		int pcChoice = rand() % 3;

		if (choice == 0) { //
			cout << "YOU : SCISSORS" << endl;
			if (pcChoice == 0) {
				cout << "COMPUTER : SCISSORS" << endl;
				cout << "DRAW" << endl;
				draw++;
			}
			else if (pcChoice == 1) {
				cout << "COMPUTER : ROCK" << endl;
				cout << "LOSE" << endl;
				lose++;
			}
			else if (pcChoice == 2) {
				cout << "COMPUTER : PAPER" << endl;
				cout << "WIN" << endl;
				win++;
			}

		}
		else if (choice == 1) { //
			cout << "YOU : ROCK" << endl;
			if (pcChoice == 0) {
				cout << "COMPUTER : SCISSORS" << endl;
				cout << "WIN" << endl;
				win++;
			}
			else if (pcChoice == 1) {
				cout << "COMPUTER : ROCK" << endl;
				cout << "DRAW" << endl;
				draw++;
			}
			else if (pcChoice == 2) {
				cout << "COMPUTER : PAPER" << endl;
				cout << "LOSE" << endl;
				lose++;
			}
		}
		else if (choice == 2) { //
			cout << "YOU : PAPER" << endl;
			if (pcChoice == 0) {
				cout << "COMPUTER : SCISSORS" << endl;
				cout << "LOSE" << endl;
				lose++;
			}
			else if (pcChoice == 1) {
				cout << "COMPUTER : ROCK" << endl;
				cout << "WIN" << endl;
				win++;
			}
			else if (pcChoice == 2) {
				cout << "COMPUTER : PAPER" << endl;
				cout << "DRAW" << endl;
				draw++;
			}
		}
		else if (choice == -1) {
			break;
		}
		else {
			cout << "NUMBER" << choice <<"IS NOT ALLOWED! GAME OVER"<< endl;
			return;
		}
	}
	cout << "WIN" << win << " DRAW" << draw << " LOSE" << lose << endl;
}

int reverseNumber(int n) {
	int origin = n;
	int reverse = 0;
	while (origin > 0) {
		reverse *= 10;
		reverse += origin % 10;
		origin /= 10;
	}
	return reverse;
}

int main() {
	int num;

	rsp();

	do {
		cout << "Enter a positive number : ";
		cin >> num;
	} while (num <= 0);

	cout << "The reversed number is: " << reverseNumber(num) << endl;

	return 0;
}