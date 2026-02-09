#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    vector<int> sv = emergency;
    sort(sv.begin(), sv.end(), greater<int>());
    
    for (int i = 0; i < emergency.size(); i++) {
        for (int j = 0; j < sv.size(); j++) {
            if (emergency[i] == sv[j]) {
                answer.push_back(j + 1);
                break;
            }
        }
    }
    return answer;
}