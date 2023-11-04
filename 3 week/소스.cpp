#include <iostream>
using namespace std;

//사칙연산 프로그램
//값 두개를 입력해서, 그 값 두개의 덧셈, 뺄셈, 곱셈, 나눗셈
int main() {

	double num1, num2;

	cout << "첫 번째 값을 입력해 주세요" << endl;
	cin >> num1;

	cout << "두 번째 값을 입력해 주세요" << endl;
	cin >> num2;

	double result; //정수만 받을 수 있다 -> 이제 실수 가능

	result = num1 + num2;
	cout << "덧셈 결과 : " << result << endl;

	result = num1 - num2;
	cout << "뺄셈 결과 : " << result << endl;

	result = num1 * num2;
	cout << "곱셈 결과 : " << result << endl;

	result = num1 / num2;
	cout << "나눗셈 결과 : " << result << endl;

	int num3 = 20, num4 = 8;

	result = num3 % num4;
	cout << "나머지 결과 : " << result << endl;

	// =의 의미 : 대입
	// ==의 의미 : 같다

	return 0;


}

