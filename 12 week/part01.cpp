//#include <iostream>
//using namespace std;
//
//int main() {
//	
//	int val = 20;
//	int val2 = val;
//	int& refVal = val;   // refVal와 val 변수의 주소값을 동일하게 한다. 
//	int* ptrVal = &val;   // ptrVal에 val의 주소값을 할당한다 -> 그래서 ptrVal의 주소값은 또 별개로 존재한다. 
//
//	cout << val << endl;
//	cout << val2 << endl;
//	cout << refVal << endl;  // 레퍼런스 변수의 값 출력 포멧
//	cout << *ptrVal << endl;  // 포이터 변수의 값 출력 포멧
//
//	cout << &val << endl;
//	cout << &val2 << endl;
//	cout << &refVal << endl;  // 레퍼런스 변수의 주소값 출력 포멧
//	cout << ptrVal << endl;  // 포인터 변수의 주소값 출력 포멧
//
//	val = 10;
//
//	cout << val << endl;
//	cout << val2 << endl;
//	cout << refVal << endl;
//	cout << *ptrVal << endl;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//// Pass by Value 방식 (시험 단골 문제) -> 원본과 넘어온 매개변수가 서로 복사본일 뿐
//void addNum(int target) {
//	target += 1;
//}
//
//// Pass by Reference 방식 (시험 단골 문제) -> 원본과 넘어온 매개변수가 같은 주소값을 공유 (원본이 같다)
//void addNumRef(int &target) {
//	target += 1;
//}
//
//// Pass by Pointer 방식 (시험 단골 문제) -> 원본과 넘어온 매개변수가 같은 주소값을 공유 (원본이 같다)
//void addNumPtr(int* target) {
//	*target += 1;
//	cout << "target에 저장되어있는 주소 " << target << endl;
//	cout << "targer의 주소 " << &target << endl;
//}
//
//int main() {
//
//	int value = 10;
//
//	addNum(value);
//	cout << value << endl;
//
//	addNumRef(value);
//	cout << value << endl;
//
//	addNumPtr(&value);
//	cout << "value의 주소" << &value << endl;
//	cout << value << endl;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Swapclass {
//private:
//	int num = 0;
//public:
//	Swapclass(int a) {
//		num = a;
//	}
//	void setNum(int a) {
//		num = a;
//	}
//	int getNum() {
//		return num;
//	}
//};
//
//// Pass by Reference
//void swap(Swapclass& a, Swapclass& b) {		// 두 개의 변수의 값을 서로 바꾸는 함수
//	int tmp = a.getNum();
//	a.setNum(b.getNum());
//	b.setNum(tmp);
//}
//
//// Pass by Pointer
//void swap2(Swapclass* a, Swapclass* b) {		// 두 개의 변수의 값을 서로 바꾸는 함수
//	int tmp = a->getNum();						// Pass by Pointer 방식으로 객체를 매개변수로 받을 때는, 사용할 때 Pointer를 지우고 arrow 명령어를 사용해야 한다. 
//	a->setNum(b->getNum());
//	b->setNum(tmp);
//}
//
//int main() {
//	Swapclass first(10);
//	Swapclass second(5);
//
//	cout << first.getNum() << " " << second.getNum() << endl;
//	swap(first, second);
//	cout << first.getNum() << " " << second.getNum() << endl;
//	swap2(&first, &second);
//	cout << first.getNum() << " " << second.getNum() << endl;
//
//	return 0;
//}

#include <iostream>
using namespace std;

void printArr(double* tmpArr) {
	for (int a = 0; a < 5; a++) {
		cout << tmpArr[a] << endl;
		cout << *(tmpArr + a) << endl;
	}
}

int main() {

	double arr[5] = { 2,5,7,1,9 };

	cout << *arr << endl;
	cout << *(arr + 1) << endl;

	for (int a = 0; a < 5; a++) {
		cout << arr[a] << endl;
		cout << *(arr + a) << endl;
	}

	cout << endl;

	printArr(arr);

	return 0;
}