#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = 0;
    string str = to_string(num);
    char target = k + '0';
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == target) {
            answer = i+1;
            break;
        }
    }
    if (answer == 0) answer = -1;
    return answer;
}