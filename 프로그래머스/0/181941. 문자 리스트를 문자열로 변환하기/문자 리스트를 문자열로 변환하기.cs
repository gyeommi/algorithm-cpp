using System;
using System.Text;

public class Solution {
    public string solution(string[] arr) {
        string answer = "";
        StringBuilder sb = new StringBuilder();
        
        for (int i = 0; i < arr.Length; i++) {
            sb.Append(arr[i]);
        }
        answer = sb.ToString();
        return answer;
    }
}