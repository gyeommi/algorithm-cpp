#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    
    for (int i = 1; i < food.size(); i++) {
        int count = food[i]/2;
        for (int j = 0; j < count; j++) {
            answer += to_string(i);
        }
    }
    answer += "0";
    
    string temp = answer.substr(0, answer.length() - 1);
    reverse(temp.begin(), temp.end());
    answer += temp;
    return answer;
}