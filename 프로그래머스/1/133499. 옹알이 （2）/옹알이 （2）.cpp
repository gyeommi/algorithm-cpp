#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    int preIndex = -1;
    string foo[4] = {"aya", "ye", "woo", "ma"};
    string word;
    
    for (int i = 0; i < babbling.size(); i++)
    {
        word = babbling[i];
        for (int j = 0; j < 4; ++j)
        {
            if (word.substr(0, foo[j].size()) == foo[j] && preIndex != j)
            {
                word.erase(0, foo[j].size());
                
                preIndex = j;
                j = -1;
            }
        }
        if (word.size() == 0)
            ++answer;
        preIndex = -1;
    }
    
    return answer;
}