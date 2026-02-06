#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min = 100001, n = 0;
    
    if (arr.size() == 1) answer.push_back(-1);
    else {
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] < min) {
                min = arr[i];
                n = i;
            }
        }
        arr.erase(arr.begin() + n);
        answer = arr;
    }
    return answer;
}