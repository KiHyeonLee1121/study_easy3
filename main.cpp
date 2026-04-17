#include <iostream>
#include <string>
using namespace std;

class Person {
private:
	string name;
	string phoneNo;

public:
	void setName(string name) {
		this->name = name;
	}

	void setPhoneNo(string phoneNo) {
		this->phoneNo = phoneNo;
	}

	string getName()const {
		return name;
	}

	string getPhoneNo()const {
		return phoneNo;
	}

	void show() {
		cout << getName() << endl;
	}

	
};

void search(Person p[], int size, string findName) {

   cout << "전화번호는 ";

	for (int i = 0 ; i < size; i++) {
		if (p[i].getName() == findName) {
			cout << p[i].getPhoneNo() << endl;
			return;
		}
	}
}

int main() {

	Person p[3];

   cout << "이름과 전화번호를 입력하세요. " << endl;

	string nameset, phoneset;

	for (int i = 0; i < 3; i++) {
       cout << "Person" << " " << i + 1 << ">>";
		cin >> nameset >> phoneset;
		p[i].setName(nameset);
		p[i].setPhoneNo(phoneset);
		cout << endl;
	}

   cout << "모든 이름:";
	for (int i = 0; i < 3; i++) {
		p[i].show();
	}
	cout << endl;

    cout << "전화번호를 검색합니다. 이름을 입력하세요>> ";
	cin >> nameset;
	cout << endl;


	search(p, 3, nameset);

	return 0;
}

//3주차 실습문제.pdf의 3번 문제는, Person 객체가 name과 phoneNo를 가지고,
//이에 대한 get/set 함수를 만든 뒤, main에서 Person 객체의 배열 3개를 생성해서 사용자 입력을 저장하고
//모든 이름을 출력하는 show()와 이름으로 전화번호를 찾는 search()를 구현하는 문제
//이 떄 show함수는 선형탐색으로 모든 배열의 원소를 읽어와서
//일치여부를 판단하면 됨.
//빌드 안되거나 한글 깨지면 인코딩 문제일 수 있으니까
//서명있는 서명잇는 utf-8로 바꿔서 저장.
//다른이름으로 저장> 저장옆에 화살표 누르고>인코딩방식선택.