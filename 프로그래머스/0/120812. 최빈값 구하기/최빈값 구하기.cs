using System;

public class Solution {
    public int solution(int[] array) {
        int answer = 0;
        int max = 0;
        bool isDuplicated = false;
        int[] count = new int[1001];

        foreach (int n in array)
        {
            count[n]++;
        }

        for (int i = 0; i < count.Length; i++)
        {
            if (count[i] > max)
            {
                max = count[i];
                answer = i;
                isDuplicated = false;
            }
            else if (count[i] == max)
            {
                isDuplicated = true;
            }
        }

        if (isDuplicated)
            return -1;

        return answer;
    }
}