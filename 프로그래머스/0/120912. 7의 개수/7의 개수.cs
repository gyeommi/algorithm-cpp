using System;

public class Solution {
    public int solution(int[] array) {
        int answer = 0;
        string str;

        foreach (int v in array)
        {
            str = v.ToString();
            foreach (char c in str)
            {
                if (c == '7')
                    answer++;
            }
        }

        return answer;
    }
}