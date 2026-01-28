#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    
    for (const string& row : picture) {
        string expanded;
        expanded.reserve(row.size() * k);

        for (char c : row) {
            expanded += string(k, c);
        }
        answer.insert(answer.end(), k, expanded);
    }
    return answer;
}