#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    
    for (int idx = i; idx <= j; idx++) {
        string s = to_string(idx);
        
        for (char c : s) {
            if (c == k + '0') answer++;
        }
    }
    
    return answer;
}