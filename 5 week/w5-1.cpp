#include <iostream> // input output stream
#include <iomanip> // fixed, setprecision
using namespace std;

int main() {

	// ex1)
	//double d = 1212.34345656;
	//cout << d << endl;
	//cout << fixed << d << endl;
	//cout << setprecision(3) << d << endl;
	//// fixed 소수점을 모두 출력하는 명령어 (최대 6째자리까지 출력)
	//// setprecision(n) 소수 n번째까지 출력하는 명령어

	//// ex2)
	// 세 자리 수를 입력하고 이것을 백의 자리, 십의 자리, 일의 자리로 나타내는 프로그램
	//int num = 0;
	//cin >> num;
	//
	//int hund;
	//hund = num / 100;
	//cout << hund << endl;
	//
	//int ten;
	//ten = num % 100;
	//ten = ten / 10;
	//cout << ten << endl;
	//
	//int unit;
	//unit = num % 100;
	//unit = unit % 10;
	//cout << ten << endl;

	// ex3)
	//// 초를 입력하고, 이것을 x시간 x분 x초로 나타내는 프로그램
	//int num2 = 0;
	//cin >> num2;
	//
	//int hour;
	//hour = num2 / 3600;
	//
	//int minutes;
	//minutes = num2 % 3600;
	//minutes = minutes / 60;
	//
	//int second;
	//second = num2 % 3600;
	//second = second % 60;
	//
	//cout << hour << "시간" << minutes << "분" << second << "초" << endl;

	////조건문

	//int asdf = 10;

	//if (asdf < 10) {
	//	cout << "10보다 작습니다." << endl;
	//}
	//else if (asdf > 10) {
	//	cout << "10보다 큽니다." << endl;
	//}
	//else if (asdf == 10) {
	//	cout << "10과 같습니다." << endl;
	//}

	//if (asdf <= 10) {
	//	cout << "10 이하입니다." << endl;
	//}

	//if (asdf >= 10) {
	//	cout << "10 이상입니다." << endl;
	//}

	int num = 10;

	if (num < 10) {
		cout << "10보다 큽니다." << endl;
	}
	else {
		cout << "10 이하입니다." << endl;
	}

	int select = 0;
	cout << "원하는 메뉴를 선택해 주세요" << endl;
	cout << "1.이름출력 / 2. 학번출력 / 3. 성별출력" << endl;
	cin >> select;

	switch (select) {
	case 1:
		cout << "이름 : 코딩하는 노예" << endl;
		break;
	case 2:
		cout << "학번 : 12211628" << endl;
		break;
	case 3:
		cout << "성별 : 남" << endl;
		break;
	default:
		cout << "다시 입력해주십시오" << endl;
		cin >> select;
	}



	return 0;
}