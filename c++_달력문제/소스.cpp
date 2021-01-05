#include <iostream>
using namespace std;
int main() {
    int m; int d;
    int total = 0;
    int last[] = { 31,28,31,30,31,30,31,31,30,31,30,31 }; //달의 마지막 날
    //2007년을 설정했으므로 윤년은 아니다. 그러므로 2월은 28일이 마지막.
    const char* day[] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
    //각 요일의 문자열
    cin >> m >> d; // 달과 날짜를 입력 
    for (int i = 1; i < m; i++) { //1월부터 입력된 달 전까지 i를 1씩 증가
        total += last[i - 1]; // 각각 마지막 달을 입력
    }
    total += d; // 날을 더해서 2007년 1월 1일부터 2007년 m월 n일까지의 총 일수를 구함
    cout << day[total % 7] << "\n"; 
    // 7로 나누어 나머지가 나온 숫자를 day의 인덱스로 설정한 뒤 출력

	return 0;
}