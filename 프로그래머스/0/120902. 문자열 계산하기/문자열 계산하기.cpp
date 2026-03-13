#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string my_string) {
    stringstream ss(my_string);
    int answer = 0;
    int num;
    string op;

    ss >> answer; // 첫 번째 숫자 저장

    while (ss >> op >> num) { // 연산자와 다음 숫자 반복해서 가져오기
        if (op == "+") {
            answer += num;
        } else {
            answer -= num;
        }
    }
    return answer;
}
