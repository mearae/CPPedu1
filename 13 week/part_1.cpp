//#include <iostream>
//using namespace std;
//
//int main() {
//
//	//int num = 10;
//
//	//cout << num << endl;
//
//	//int* num2 = new int;
//	//*num2 = 20;
//
//	//cout << *num2 << endl;
//
//	//delete num2; // 삭제 작업
//
//
//	int n;
//	cout << "입력할 과목 개수는?";
//	cin >> n;
//
//	int* arr = new int[n]; // 배열에 원래 상수만 들어가지만, 동적할당을 통해서는 변수도 입력가능하다.
//									// 우리가 얻은 것, 변수의 크기를 가변적으로 정할 수 있다. 
//	for (int a = 0; a < n; a++) {
//		cout << (a + 1) << "번째 과목 점수 : ";
//		cin >> arr[a];
//	}
//	
//	int sum = 0;
//	for (int a = 0; a < n; a++) {
//		sum += arr[a];
//	}
//
//	cout << sum / n << endl;
//
//	delete[] arr; // 꼭 메모리에서 직접 삭제를 해줘야 함! 안 해주면 감점당함
//
//	return 0;
//}
 
//#include <iostream>
//using namespace std;
//
//int main() {
//
//	int** arr = new int*[5]; // 행에 대한 동적 할당
//
//	for (int a = 0; a < 5; a++) {
//		arr[a] = new int[5]; // 열에 대한 동적 할당
//	}
//
//	for (int a = 0; a < 5; a++) {
//		for (int b = 0; b < 5; b++) {
//			cout << arr[a][b] << " ";
//		}
//		cout << endl;
//	}
//
//	for (int a = 0; a < 5; a++) {
//		delete[] arr[a];
//	}
//	delete[] arr;
//
//	return 0;
//}

// 메모리 (RAM) 구조
//
// 메모리는 사실 구역으로 나눠져 있다. 
//
//Stack - 일반 변수가 저장 (넓이가 제일 넓다. )
//Data - 전역 변수가 저장
//Heap - 동적할당 변수가 저장
//Codr - 

// #define _CPR_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstring>
#pragma warning(disable:4996)
using namespace std;

int main() {
//
//	// string str = "hello word!";
//
//	//char str[] = { 'h', 'e', 'l','l', 'o', '\0' };
//	//const char* str2 = "hello";
//
//	//cout << str << endl;
//	//cout << str2 << endl;
//
//	int num;
//	string str;
//	string tmp;
//
//	cout << "숫자를 입력해주세요. " << endl;
//	cin >> num;
//
//	// num에다가 입력을 할 때도 Enter를 입력함. 
//	// 1\0
//	// \0 -> 이게 남아있음 (버퍼)
//
//	// fflush(stdin); // 버퍼를 강제로 비워지는 함수 // 이젠 안 되는 듯
//
//	// cin.clear(); // 왜 안 됨?
//
//	getline(cin, tmp);
//	cout << "문자열을 입력해주세요. " << endl;
//	getline(cin, str);
//
//	// hello/0
//
//	// 값을 입력 -> 그 값이 바로 메모리로 가는게 아니라 버퍼에 잠시 저장됨 -> 메모리로 이동
//
//	cout << "str : " << str << endl;
//	cout << "num : " << num << endl;

	char str1[] = "hello";
	char str2[] = "world";

	//cout << str1 << " " << str2 << endl;

	strcpy(str1, str2);

	int result = strcmp(str1, str2);
	cout << result << endl;

	//strcat(str1, str2);

	//cout << str1 << endl;
	//cout << str1 << " " << str2 << endl;

	return 0;
}