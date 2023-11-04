#include <iostream>
using namespace std;

// 생물 class
class Creture {
private:
	string name;
	int hp;
public:
	void setName(string _name) {name = _name;}
	void setHp(int _hp) {
		hp = _hp;
		cout << name << "의 HP가" << hp << " 가 되었다. " << endl;
	}
	string getName() { return name; }
	int getHp() { return hp; }

	void move() {
		cout << name << "은/는 이동했다. " << endl;
	}
	void attack() {
		cout << name << "은/는 공격했다. " << endl;
	}

};

// 몬스터 class
class Monster : public Creture {
private:
	string dropitem;

public:
	void setDropitem(string _di) {dropitem = _di;}
	string getDropitem() { return dropitem; }

	void roar() {
		cout << getName() << "은/는 울부짖었다. " << endl;
	}
	void printinfo() {
		cout << "이름 : " << getName() << endl;
		cout << "HP : " << getHp() << endl;
		cout << "드롭 아이템 " << dropitem << endl;
	}

};

// 플레이어 class
class Player : public Creture {
private:
	int mp;
	int level;
public:
	void setMp(int _mp) {mp = _mp;}
	void setLevel(int _level) {level = _level;}
	int getMp() { return mp; }
	int getLevel() { return level; }

	void magic() {
		cout << getName() << "은/는 매직미사일을 사용했다. " << endl;
		mp -= 3;
	}
	void fire() {
		cout << getName() << "은/는 화염구를 사용했다. " << endl;
		mp -= 6;
	}
	void printinfo(){
		cout << "이름 : " << getName() << endl;
		cout << "레벨 : " << level << endl;
		cout << "HP : " << getHp() << endl;
		cout << "MP : " << mp << endl;
	}
};

// 게임을 구성하는 class
class Game : public Creture {
private:

public:
	Game() {
		cout << " === 객체1 게임 === " << endl;
		int isExit = false;

		Player player1;
		player1.setName("배준혁");
		player1.setLevel(1);
		player1.setHp(100);
		player1.setMp(30);

		Monster monster1;
		monster1.setName("자쿰");
		monster1.setHp(100);
		monster1.setDropitem("자쿰의 투구");


		while (isExit==false) {
			cout << "행동을 정해주세요. " << endl;
			cout << "1. 이동하기 / 2. 기본공격 / 3. 매직 미사일 / 4. 화염구 / 5. 내 정보 보기 / 6. 몬스터 정보 보기 / 7. 도망치기 " << endl;

			int select;
			cin >> select;

			switch (select) {
			case 1:
				player1.move();
				cout << endl;
				break;
			case 2:
				player1.attack();
				monster1.setHp(monster1.getHp() - 5);
				monster1.attack();
				player1.setHp(player1.getHp() - 7);
				cout << endl;
				break;
			case 3:
				player1.magic();
				monster1.setHp(monster1.getHp() - 10);
				monster1.attack();
				player1.setHp(player1.getHp() - 7);
				cout << endl;
				break;
			case 4:
				player1.fire();
				monster1.setHp(monster1.getHp() - 20);
				monster1.attack();
				player1.setHp(player1.getHp() - 7);
				cout << endl;
				break;
			case 5:
				player1.printinfo();
				cout << endl;
				break;
			case 6:
				monster1.printinfo();
				cout << endl;
				break;
			case 7:
				cout << endl;
				isExit = true;
			}
		}
	}

};

int main() {

	Game g;

	return 0;
}


// 상속 (원래는 객프2 범위)
// 맛보기? 혹은 그 이상 정도로 간단하게 진행

// 상속의 사전 의미 : 부모의 재산을 자식에게 물려주는 것
// 상속의 의미 : class에 class를 부여

// 상속에서는 부모 class가 존재
// 자식 class가 있다. 
// 자식 class에게 부모 class를 부여하는 것 (상속하는 것)

//자식 class에게 부모 class의 요소를 (멤버 변수, 멤버 함수) 자유롭게 사용할 수 있다. 


//상속을 사용하는 이유 == 객체를 사용하는 이유
// 1. 코드의 재활용성을 위해 (중복 코드 방지)
// 2. 
