using System;

public class Solution {
    public int solution(int a, int b, int n) {
        int answer = 0;
        
        while (n >= a)
        {
            int can = (n/a)*b;
            answer += can;
            n = can + n%a;
        }
        return answer;
    }
}