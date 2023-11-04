#include <iostream>
using namespace std;

int main() {

	//// 1부터 50까지 출력하는 프로그램

	//int num = 1;

	//while (num < 51) {
	//	cout << num << endl;
	//	num++;
	//}

	//// ex2) 0이 입력되면 종료되는 프로그램
	//int num = 1;

	//while (num != 0) {
	//	cout << "값을 입력해주세요 : ";
	//	cin >> num;
	//}

	//
	
	//// ex3) ex1을 for문으로 작성하기
	//for (int num = 1; num < 51; num++) {
	//	cout << num << endl;
	//}

	// for문과 while문의 차이점
	// for문 : 조건이 범위일 때
	// while문 ; 조건이 명제일 때

	//// ex4) while문의 주된 사용처 (무한루프)
	//int num = 0;
	//
	//while (true) {
	//	cout << "1. 이름, 2. 학번, 3. 과, 4. 종료" << endl;
	//	cin >> num;

	//	switch (num) {
	//	case 1:
	//		cout << "배준혁" << endl;
	//		break;
	//	case 2:
	//		cout << "12211628" << endl;
	//		break;
	//	case 3:
	//		cout << "컴퓨터공학과" << endl;
	//		break;
	//	}

	//	if (num == 4) {
	//		break;
	//	}
	//}

	//// ex5) 구구단 출력 프로그램 (이중 반복문)
	//for (int num2 = 2; num2 < 10; num2++) {
	//	for (int num1 = 1; num1 < 10; num1++) {
	//		cout << num2 << "*" << num1 << "=" << num2 * num1 << "/";
	//	}
	//	cout << endl;
	//}

	int aline = 0;
	cin >> aline;

	for (int a = 0; a < aline; a++) {			// 밖 for문 = 세로
		for (int b = 0; b < 2 * aline; b++) {		// 안 for문 = 가로
			cout << "*" ;
		}
		cout << endl;
	}
	
	for (int a = 0; a < aline; a++) {
		for (int b = 0; b < aline - a; b++) {
			cout << "*";
		}
		cout << endl;
	}

	for (int a = 0; a < aline; a++) {
		for (int b = 0; b < a+1; b++) {
			cout << "*";
		}
		cout << endl;
	}

	for (int a = 0; a < aline; a++) {
		for (int c = 0; c < a; c++) {
			cout << " ";
		}
		for (int b = 0; b < aline -a; b++) {
			cout <<"*";
		}
		cout << endl;
	}

	for (int a = 0; a < 2 * aline -1; a++) {
		for (int c = 0; (c < aline - 1 - a) || (a >= aline && c < a - aline - 1); c++) {
			cout << " ";
		}
		for (int b = 0; (a <= aline && b < 2 * a + 1)||(a > aline && b < 3 * aline - a -1 ); b++) {
			cout << "*";
		}
		cout << endl;
	}
	

	
	int number = 0;
	cin >> number;

	for (int line = 1; line <= number; line++) { // 라인제어, 입력한 수만큼의 라인 반복
		for (int space = number - line; space > 0; space--) // 공란찍기
			cout << " ";
		for (int star = 1; star <= (2 * line) - 1; star++) // 별찍기 
			cout << "*";
		cout << "\n";
	}
	for (int line = number - 1; line > 0; line--) {
		for (int space = number - line; space > 0; space--) // 공란찍기
			cout << " ";
		for (int star = 1; star <= (2 * line) - 1; star++) // 별찍기 
			cout << "*";
		cout << "\n";
	}
	


	return 0;
}