using System;
using System.Text;

public class Solution {
    public string solution(string my_string) {
        string answer = "";
        StringBuilder sb = new StringBuilder();
        
        foreach(char c in my_string)
        {
            if (!sb.ToString().Contains(c))
            {
                sb.Append(c);
            }
        }
        answer = sb.ToString();
        return answer;
    }
}