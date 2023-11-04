#include <iostream>
using namespace std;

int main() {

	//1. 자료형 종류

	int num; // 정수형 -> 4byte (32bit)
	short num2; // 정수형 -> 2byte (16bit)
	long num3; // 정수형 -> 8byte (64bit)

	// 1bit는 0 또는 1만 지정될 수 있다.
	// 8bit -> 2^8(256)
	// 8bit 즉, 1byte는 256까지의 숫자를 나타낼 수 있다.
	// 고로 int는 256^4 -> 42억 ...
	// int의 범위는 약 -21억 ~ 21억

	// long long 256^8

	unsigned int num; // 음수를 사용하지 않겠다.

	char c;    // 문자형 (4byte) 1~256개의 문자를 표현할 수 있다.
	// 아스키코드

	float f; // 실수형 (4byte) 소수 7자리
	double d; //실수형 (8byte) 소수 15자리


	// 2. 네이밍방법
	// 변수의 이름을 짓는 규칙, 함수의 이름을 짓는 규칙

	// 사회적으로 알려져있는 방법은 크게 4개가 있음

	// (1) 헝가리안 - 구시대적
	int intNum;
	char charName;

	// (2) 카멜 - 현 시점, 가장 많은 개발자가 사용하는 방법
	int studentNumber;
	char studentName;

	// (3) 파스칼 - 함수 혹은 객체를 이름 지을 때 사용
	int StudentNumber;
	char StudentName;

	// (4) 스네이크 - 현 시점, 두 번쨰로 많은 개발자가 사용하는 방법
	int student_number;
	char student_name;


	// 3. 변수 이름을 짓는 규칙

	// (1) 예약어를 사용하면 안 됨
	int cout = 10;
	cout << cout << endl;

	// (2) 변수는 숫자로 시작하면 안 됨
	int 1num;
	char 10c;

	// (3) 특수문자는 사용하면 안 됨 (단, 언더바는 사용 가능)
	int num!;
	char c@;
	int _num;

	// (4) 의미없는 변수 이름 짓지 말기
	int a;
	int b;
	char c;
	double d;



	return 0;
}