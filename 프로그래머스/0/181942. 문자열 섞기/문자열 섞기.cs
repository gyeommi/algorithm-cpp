using System;
using System.Text;

public class Solution {
    public string solution(string str1, string str2) {
        string answer = "";
        StringBuilder sb = new StringBuilder();
        
        for (int i = 0; i < str1.Length; i++) {
            sb.Append(str1[i]);
            sb.Append(str2[i]);
        }
        answer = sb.ToString();
        return answer;
    }
}