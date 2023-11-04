#include <iostream>
using namespace std;

int main() {

	//// ex1)
	//cout << 4 + 10 * 2 << endl;
	//cout << (4 + 10) * 2 << endl; //컴퓨터도 기본적으로 곱셈과 나눗셈을 우선 계산으로 한다. 
	//								//만약, 덧셈과 뺄셈을 우선 계산으로 하고 싶으면 수학과 동일하게 괄호를 이용한다. 

	// ex2) + - * / = 이외 다른 연산자 실습
	//int x = 0;
	//cout << "x의 현재 값 : " << x << endl;

	//x = x + 1; // 본인에게 1 더하기
	//cout << "x의 현재 값 : " << x << endl;

	//x += 1; // x = x + 1 와 같은 의미
	//cout << "x의 현재 값 : " << x << endl;

	//x++; // 무조건 1을 증가시킬 때 사용하는 명령어
	//cout << "x의 현재 값 : " << x << endl;

	//x--; // 무조건 1을 감소시킬 때 사용하는 명령어
	//cout << "x의 현재 값 : " << x << endl;


	//// ex2-1) 연산자 2개만 사용해서 10을 1000으로 바꿔보세요 (대입 연산자는 카운터당하지 않음)
	//
	//int ca = 10;
	//ca *= ca; // 무조건 1을 증가시킬 때 사용하는 명령어
	//ca *= ca;
	//cout << "x의 현재 값 : " << ca << endl;

	//// ex3) 자료형 변환
	//int qwer = 10;
	//int asdf = 3;
	//double result; // 만약에, 실수 결과를 얻고 싶으면, 계산하는 값들 중 최소 한 개는 실수형이어야 합니다. 
	//result = qwer / asdf;
	//cout << result << endl;

	//result = static_cast<double>(qwer) / asdf; // x를 double 자료형으로 변환
	//cout << result << endl;

	//int num = 65;
	//cout << static_cast<char>(num) << endl; // 아스키코드 검색!

	//char c = 'a';
	//cout << static_cast<int>(num) << endl;

	// ex4) 오버플로우 overflow
	unsigned int p; // 256^4개
	// x의 범위는 0 ~ 4294967295
	p = 4294967295;
	cout << p << endl;

	p++;
	cout << p << endl;

	unsigned long long o; //long long = 8byte, int = long = 4byte
	o = 4294967295;
	cout << o << endl;

	o++;
	cout << o << endl;

	cout << sizeof(int) << endl;

	cout << "안녕하세요" << endl;
	cout << "안녕하세요\n"; //역슬래시가 \임. 

	string ma = "sdfammms";
	char na = 'asdf';

	cout << ma << endl;
	cout << na << endl;

	//"" -> 문자열 (문장)
	//'' -> 문자 (글자)

	return 0;
}