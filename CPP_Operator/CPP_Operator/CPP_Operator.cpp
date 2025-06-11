#include <iostream>
using namespace std;

int a = 1;
int b = 2;

bool isSame;
bool isDifferent;
bool isGreater;
bool isSmaller;

bool test;

int hp = 100;
bool isInvincible = true;

unsigned char flag; // 부호가 없어야 비트시프트를 하더라도 부호비트가 딸려오지 않음

int main()
{
#pragma region 비교 연산

	// 언제 필요할까?
	// ex) 체력이 0이 되면 사망
	// ex) 체력이 30% 이하이면 궁극기를 발동 (100 * hp / maxHP)
	// ex) 경험치가 100이상이면 레벨업

	// a == b : a와 b의 값이 같은가?
	// 같으면 1, 다르면 0 반환
	isSame = (a == b);

	// a != b : a 와 b의 값이 다른가?
	// 다르면 1, 같으면 0 반환
	isDifferent = (a != b);

	// a > b : a가 b보다 큰가?
	// a >= b : a가 b보다 크거나 같은가?
	// 1 아니면 0
	isGreater = (a > b);

	// a < b : a가 b보다 작은가?
	// a <= b : a가 b보다 작거나 같은가?
	// 1 아니면 0
	isSmaller = (a < b);



#pragma endregion
#pragma region 논리 연산
	// 언제 필요할까? 조건에 대한 논리적 사고가 필요할 때
	// ex) 로그인할 때 아이디도 일치하고 AND 비밀번호도 일치해야 한다.
	// ex) 길드 마스터이거나 OR 운영자 계정이면 길드 해산 가능

	// ! not 
	// 0이면 1 반환 그 외엔 0
	test = !isSame; // 사실상 isDifferent의 의미

	// %% and
	// a && b : 둘 다 1이면 1, 그 외 0
	test = (hp <= 0 && isInvincible == false); // 죽음 (체력0이고 무적상태 아닐 경우)

	// || or
	// a || b : 둘 중 하나라도 1이면 1 (둘 다 0이면 0)
	test = (hp > 0 || isInvincible == true); // 생존 (체력이 0 보다 크거나 무적상태일 경우)

#pragma endregion

#pragma region 비트 연산

	// 언제 필요할까?
	// 비트 단위의 조작이 필요할 때
	// 대표적으로 BitFlag 

	// ~ bitwise not
	// 단일 숫자의 모든 비트를 대상으로, 0은 1, 1은 0으로 뒤바뀜
	
	// & bitwise and
	// 두 숫자의 모든 비트 쌍을 대상으로 and를 함
	
	// | bitwise or
	// 두 숫자의 모든 비트 쌍을 대상으로 or를 함

	// ^ bitwise xor
	// 두 숫자의 모든 비트 쌍을 대상으로 xor를 함
	// xor를 두번 해주면 원래의 숫자가 반환되므로 암호학에서 유용하게 사용한다고 함.

	// << 비트 좌측 이동
	// 비트열을 N만큼 왼쪽으로 이동
	// 왼쪽의 넘치는 N개의 비트는 버리고 새로 생성되는 N개의 비트는 0
	// *2를 할 때 컴파일러에서 자주 보이는 패턴

	// >> 비트 우측 이동
	// 비트열을 N만큼 오른쪽으로 이동
	// 오른쪽의 넘치는 N개의 비트는 버리고
	// 왼쪽에 생성되는 N개의 비트는 
	// 부호 비트가 존재할 경우 부호 비트를 따라감 (부호가 있다면 유의해야함)
	// 그렇지 않다면 0

	// BitFlag를 할때는 해당 숫자를 unsigned 타입으로 해놓는게 좋다

	// 실습
	// 0b0000 [무적][기절][변이][속박]
	
	// 무적 상태로 만든다.
	flag = (1 << 3);

	// 기절 상태를 추가한다.
	flag |= (1 << 2);

	// 무적인지 확인해야할 때 (다른 상태이상은 상관없을 때!!)
	// bitmask
	bool invincible = ((flag & (1 << 3)) != 0);

	// 무적이거나 변이 상태인지 확인하고 싶다면?
	bool mask = (1 << 3) | (1 << 1);
	bool polymorphOrInvincible = ((flag & 0b1010) != 0);

#pragma endregion 

}