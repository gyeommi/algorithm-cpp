#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    string s = to_string(age);
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0') answer += 'a';
        else if (s[i] == '1') answer += 'b';
        else if (s[i] == '2') answer += 'c';
        else if (s[i] == '3') answer += 'd';
        else if (s[i] == '4') answer += 'e';
        else if (s[i] == '5') answer += 'f';
        else if (s[i] == '6') answer += 'g';
        else if (s[i] == '7') answer += 'h';
        else if (s[i] == '8') answer += 'i';
        else if (s[i] == '9') answer += 'j';
    }
    
    return answer;
}