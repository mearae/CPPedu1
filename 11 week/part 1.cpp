//// 생성자 (Constructor) + 소멸자 (Destructor) 실습
//
//#include <iostream>
//using namespace std;
//
//class Test {
//private:
//	int num;
//public:
//	Test(int n) { // 객체가 생성될 때 무조건적으로 실행되는 함수. (멤버함수 초기화, 프로그램상 초기 설정)
//		num = n;
//		cout << num << "번 생성자 실행 @" << num << endl;
//	}
//
//	// 소멸자 : 객체가 삭제될 때 무조건적으로 실행되는 함수. (작업이 끝난 내용을 종료시키는 역할)
//	~Test() {
//		cout << num << "번 소멸자 실행" << num << endl;
//	}
//};
//
//void function() {
//	
//	Test t3(3);
//	Test t4(4);
//}
//
//int main() {
//
//	Test t1(1);
//	Test t2(2);
//
//	function();
//
//	Test t5(5);
//	Test t6(6);
//
//
//	return 0;
//}