#include <iostream>
using namespace std;

int main() {

	//변수 = 자료형 + 이름
	int num; //num이란 변수를 만들었는데, 숫자(정수)만 넣고 싶다.
	double num2; //num2  소수
	char word; // word  문자

	num = 1.2;
	num2 = 5.7;
	word = 'A';

	cout << "객체지향프로그래밍1" << endl; //endline
	cout << "hello world" << endl;

	cout << "num의 값은?" << num << endl;
	cout << "num2의 값은?" << num2 << endl;
	cout << "word의 값은?" << word << endl;

	// 입력 작업
	cin >> num;
	cout << "num의 값은?" << num << endl;


}
