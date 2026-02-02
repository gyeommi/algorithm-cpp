#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int maxC = 0;
    vector<pair<int, int>> v(1001, {0, 0});
    
    for (int i = 0; i < array.size(); i++) {
        v[array[i]].first = array[i];
        v[array[i]].second++;
    }
    
    for (int j = 0; j < v.size(); j++) {
        if (v[j].second > maxC) {
            maxC = v[j].second;
            answer = v[j].first;
        }
        else if (v[j].second == maxC && v[j].second != 0)
            answer = -1;
    }
    return answer;
}