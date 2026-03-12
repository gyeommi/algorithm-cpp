#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

string solution(string s) {
    string answer = "";
    map<char, int> counts;
    
    for (char c : s) counts[c]++;
    
    for (auto const& [key, val] : counts) {
        if (val == 1) answer += key;
    }
    
    sort(answer.begin(), answer.end());
    return answer;
}