//// 학점 계산기
//
//// 몇 개의 과목을 입력할 것인지
//// 과목에 대한 (4.5~0) - A + 4.5 / A0 4.0 / B + 3.5 / B0 3.0 ....... D0 1.0 / F 0.0 (Clear)
//// 그 과목의 단위수 (Clear)
//// 최종 평균 학점 출력
//
//#include <iostream>
//using namespace std;
//
//int main() {
//
//	cout << "== 평균 학점 계산 프로그램 ==" << endl;
//
//	cout << "몇 개의 과목을 입력하시겠습니까?" << endl;
//	cout << ":";
//	int num = 0;
//	cin >> num;
//
//	double totalGrade = 0; // 전체 학점*단위수 를 받는 변수
//	int totalWeight = 0; // 전체 단위수를 저장하는 변수
//
//	for (int a = 0; a < num; a++) {
//
//		double grade = 0.0; // 학점을 받는 변수
//		cout << (a + 1) << "번째 과목의 점수 :";
//		cin >> grade;
//
//		int weight = 0; // 단위수를 받는 변수
//		cout << (a + 1) << "번째 과목의 단위수 : ";
//		cin >> weight;
//		totalWeight += weight;
//
//		totalGrade += grade * weight; // totalGrade = totalGrade + (grade * weight);
//	}
//	
//	totalGrade /= totalWeight; // 최종 결과 값에 과목 수로 나누는 작업
//	cout << "평균 학점 : " << totalGrade << endl;
//	
//	return 0;
//}


// 계산기

#include <iostream>
using namespace std;

double add(double a, double b) {
	return a + b;
}

void min() {
	double num1 = 0, num2 = 0;
	cout << "첫번째 숫자 : ";
	cin >> num1;
	cout << "두번째 숫자 : ";
	cin >> num2;

	cout << "결과:" << num1 - num2 << endl;
}

void mul() {
	double num1 = 0, num2 = 0;
	cout << "첫번째 숫자 : ";
	cin >> num1;
	cout << "두번째 숫자 : ";
	cin >> num2;

	cout << "결과:" << num1 * num2 << endl;
}

void dev() {
	double num1 = 0, num2 = 0;
	cout << "첫번째 숫자 : ";
	cin >> num1;
	cout << "두번째 숫자 : ";
	cin >> num2;

	cout << "결과:" << num1 / num2 << endl;
}

int main() {
	
	cout << "== 계산기 프로그램 ==" << endl;
	

	while (true) {

		cout << "어떤 작업을 하시겠습니까? (1. 더하기, 2. 빼기, 3. 곱하기, 4. 나누기, 5. 종료)" << endl;
		cout << ":";
		int select = 0;
		cin >> select;

		double num1 = 0, num2 = 0;

		switch (select){
		case 1: // 더하기 기능
			cout << "첫번째 숫자 : ";
			cin >> num1;
			cout << "두번째 숫자 : ";
			cin >> num2;
			cout << "결과 :" << add(num1, num2) << endl;
			break;
		case 2: // 빼기 기능
			min();
			break;
		case 3: // 곱하기 기능
			mul();
			break;
		case 4: // 나누기 기능
			dev();
			break;
		}

		if (select == 5) {
			break;
		}
	}

	return 0;
}