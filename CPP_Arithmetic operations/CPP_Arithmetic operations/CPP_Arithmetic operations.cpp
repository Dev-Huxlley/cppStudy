#include <iostream>
using namespace std;

// 데이터 연산
// 데이터를 가공하는 방법

// a[ 1 ]
// a라는 이름의 바구니를 할당하고 안에 1을 넣는다
int a = 1;

// b[ 1 ]
// b라는 이름의 바구니를 할당하고 안에 2을 넣는다
int b = 2;



int main()
{
#pragma region 산술 연산
    // 산술 연산자
    // 
    // 
    // 
    // 대입연산
    // a에 b를 대입하고 b를 반환하라
    // -> b라는 바구니 안에 있는 값을, a라는 바구니 안에 복사한다.
    a = b;
    a = (b = 3);

    // 사칙 연산
    // 언제 필요한가?
    // EX) 데미지 계산, 체력의 감소나 루프문에서 카운터를 1증가시키는 것 등

    a = b + 3; // 덧셈 add
    a = b - 3; // 뺄셈 sub
    a = b * 3; // 곱셈 mul
    a = b / 3; // 나눗셈 div
    a = b % 3; // 나머지 div

    a += 3; // a = a + 3;
    a -= 3; // a = a - 3;
    a *= 3;
    a /= 3;
    a %= 3;

    // 증감 연산자
    a = a + 1; // add eax, 1 -> inc eax
    a++;
    ++a;
    a--;
    --a;

    b = a++; // b = a -> a를 1 증가
    b = ++a;
    
    b = a + 1 * 3;


#pragma endregion

}

