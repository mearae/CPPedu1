//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//using namespace std;
//
//int main() {
//	//
//	while (true) {
//		int choice = 0;
//		cin >> choice;
//
//		if (choice == 0) {
//
//		}
//		else {
//			//
//			int a = 0, b = 0;
//			srand(time(NULL));
//			while (true) {
//				a = rand() % 10;
//				b = rand() % 10;
//
//				if (a == b || a == 0 || b == 0) {
//					cout << "중복예외" << endl;
//					continue;
//				}
//				else {
//					cout << "a : " << a << "b : " << b << endl;
//					break;
//				}
//			}
//
//			//
//			int checkpoint = 45;
//			while (checkpoint <= 60) {
//
//				if (checkpoint % a == 0 && checkpoint % b == 0) {
//					cout << checkpoint << "는" << a << "와" << b << "의 공배수" << endl;
//				}
//				else if (checkpoint % a == 0) {
//					cout << checkpoint << "는" << a << "의 공배수" << endl;
//				}
//				else if (checkpoint % b == 0) {
//					cout << checkpoint << "는" << b << "의 공배수" << endl;
//				}
//				else {
//					cout << checkpoint << endl;
//				}
//
//				checkpoint++;
//			}
//
//		}
//	}
//	return 0;
//}