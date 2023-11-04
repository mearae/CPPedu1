#include <iostream>
using namespace std;

// 이 클래스는 게임의 캐릭터를 구성하는 클래스이다. 
class Chracter { // 객체는 특정 기능을 하는 요소들의 집합, 함수는 그 요소들을 구성 -> 객체는 함수들의 집합이다. 
private: // 이 class가 아닌 다른 곳에서 접근을 막게함.
	string name; // 멤버 변수
	int level;

public: //이 class가 아닌 다른 곳에서도 접근할 수 있음.
	Chracter(string recName,int recLevel) { // 생성자. 객체가 만들어질 때 무조건 실행되는 함수
		name = recName;
		level = recLevel;
	} // 멤버 함수
	void printinformation() {
		cout << "아이디 : " << name << endl;
		cout << "레벨 : " << level << endl;
	} // 멤버 함수

	void setLevel(int changeLevel) { // 이 class 밖에서 level 변수에 접근할 수 없기 때문에 함수의 도움을 받아야함.
		level = changeLevel;
	} // 멤버 함수

	int getLevel() { // 이 class 밖에서 level 변수에 접근할 수 없기 때문에 함수의 도움을 받아야함.
		return level;
	} // 멤버 함수

	string getName() { // 이 class 밖에서 level 변수에 접근할 수 없기 때문에 함수의 도움을 받아야함.
		return name;
	} // 멤버 함수
};

int main() {
	string tmpName;
	cin >> tmpName;

	int tmpLevel;
	cin >> tmpLevel;

	Chracter player1(tmpName, tmpLevel); // 객체 생성의 역할
	player1.printinformation();
	cout << "에러확인" << player1.getName() << endl;

	player1.setLevel(player1.getLevel() + 1);
	player1.printinformation();

	cin >> tmpName;
	cin >> tmpLevel;

	Chracter player2(tmpName, tmpLevel); //객체 생성의 역할
	player2.printinformation(); //객체와는 독립적으로 동작함.

	return 0;
}