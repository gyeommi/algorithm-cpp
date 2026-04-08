#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
    int cnt[201] = {0, };

    for (int i = 0; i < 3; i++) {
        int start = min(lines[i][0], lines[i][1]);
        int end = max(lines[i][0], lines[i][1]);
        
        for (int j = start; j < end; j++) {
            cnt[j + 100]++;
        }
    }

    for (int i = 0; i < 201; i++) {
        if (cnt[i] >= 2) {
            answer++;
        }
    }
    return answer;
}
