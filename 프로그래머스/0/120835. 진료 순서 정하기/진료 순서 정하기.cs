using System;

public class Solution {
    public int[] solution(int[] emergency) {
        int[] answer = new int[emergency.Length];
        int[] sorted = new int[emergency.Length];
        Array.Copy(emergency, sorted, emergency.Length);

        Array.Sort(sorted);
        Array.Reverse(sorted);

        for (int i = 0; i < emergency.Length; i++)
        {
            answer[i] = Array.IndexOf(sorted, emergency[i]) + 1;
        }
        
        return answer;
    }
}