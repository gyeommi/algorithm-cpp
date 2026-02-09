#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    
    for (int i = 0; i <= t.length() - p.length(); i++) {
        string tmp = t.substr(i, p.length());
        long long tmpll = stoll(tmp), pll = stoll(p);
        
        if (tmpll <= pll) answer += 1;
    }
    return answer;
}