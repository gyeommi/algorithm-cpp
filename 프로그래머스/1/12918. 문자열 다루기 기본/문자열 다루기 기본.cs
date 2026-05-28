public class Solution {
    public bool solution(string s) {
        bool answer = true;
        
        if (s.Length != 4 && s.Length != 6)
        {
            answer = false;
        }
        for (int i = 0; i < s.Length; i++)
        {
            if (s[i] < '0' || '9' < s[i])
            {
                answer = false;
                break;
            }
        }
        return answer;
    }
}