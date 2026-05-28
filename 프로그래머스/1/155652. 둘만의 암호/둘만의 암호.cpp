#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    
    for (int i = 0; i < s.size(); i++)
    {
        int count = 0;
        
        while (count < index)
        {
            s[i]++;
            
            if (s[i] > 'z')
                s[i] = 'a';
            
            if (skip.find(s[i]) == string::npos)
                count++;
        }
    }
    
    answer = s;
    
    return answer;
}