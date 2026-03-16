#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    string str = to_string(n);
    for (char ch : str) {
        answer += (ch - '0');
    }
    return answer;
}