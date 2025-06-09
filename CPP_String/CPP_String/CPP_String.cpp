#include <iostream>
#include <string>
using namespace std;

// 문자와 문자열
// bool은 그냥 정수지만, 참/거짓을 나타내기 위해 사용
// 사실char도 마찬가지로 쓰는데 그냥 정수지만 '문자' 의미를 나타내기 위해서 사용

// char : 알파벳 / 숫자 문자를 나타냄
// wchar_t : 유니코드 문자를 나타냄

// ASCII (American Standard Code for Information Interchange)

// '문자'의 의미로 작은 따옴표 '' 사용

char ch = 97; // a 아스키코드 97
char ch2 = '2'; // 2 2에 해당하는 아스키코드 값이 저장
char ch3 = '1' + 1; // 2 1에 해당하는 아스키코드 값이 저장되고 거기에 +1

// 국제화 시대에 영어만으로 서비스 할 수 없음
// 전 세계 모든 문자에 대해 유일 코드를 부여한 것이 유니코드(unicode)
// 참고) 유니코드에서 가장 많은 번호를 차지하는게 한국어/중국어

// 유니코드는 표기 방식이 여러가지가 있는데 대표적으로 UTF8 / UTF16
// UTF8
// - 알파벳, 숫자 1바이트 (ASCII 동일한 번호)
// - 유럽 지역의 문자는 2바이트
// - 한글, 한자 등 3바이트
// UTF16
// - 알파벳, 숫자, 한글, 한자 등 거의 대부분 문자 2바이트
// - 매우 예외적인 고대 문자만 4바이트 (사실상 없음)

wchar_t wch = L'안';


// Escape Sequence
// 표기하기 애매한 애들을 표현
// \0 = 아스키코드0 = Null
// \t = 아스키코드9 = Tab
// \n = 아스키코드10 = LineFeed (한 줄 아래로)
// \r = 아스키코드13 = CarriageReturn (커서<<)
// \' = '

// 문자열
// 문자들이 열을 지어서 모여 있는 것(문자 배열)
// 정수 (1~8바이트) 고정 길이로
// 끝은 NULL (0)

// char str[] = { 'h', 'e', 'l', 'l', 'o' };

char str2[] = "Hello World";

string name = "홍길동";
string greeting = "안녕하세요, " + name + "님!";
string greeting2 = "Hello Seo!";

char testchar1[100] = "Hello";
char testchar2[100] = "World";


int main()
{
    char str[] = { 'h', 'e', 'l', 'l', 'o', '\0'};

    cout << "체력이" << ch << "남았습니다." << endl;
    cout << "체력이" << ch2 << "남았습니다." << endl;
    cout << "체력이" << ch3 << "남았습니다." << endl;

    // cout는 char 전용

    wcout.imbue(locale("kor"));
    wcout << wch << endl;

    cout << str << endl;
    cout << str2 << endl;

    cout << greeting2.length() << endl;      // 문자열 길이
    cout << greeting2[0] << endl;           // 첫 번째 문자

    cout << greeting2 << endl;

}