#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    
    for (string q : quiz) {
        stringstream ss(q);

        int a, b, c;
        char op, equal;

        ss >> a >> op >> b >> equal >> c;

        int result;

        if (op == '+') result = a + b;
        else result = a - b;

        if (result == c) answer.push_back("O");
        else answer.push_back("X");
    }
    
    return answer;
}