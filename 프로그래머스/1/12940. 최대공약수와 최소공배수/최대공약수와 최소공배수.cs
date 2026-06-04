using System;
using System.Collections;

public class Solution {
    public int gcd(int a, int b)
    {
        if (a%b == 0) return b;
        else return gcd(b, a%b);
    }
    
    public int lcm(int a, int b)
    {
        return a * b / gcd(a, b);
    }
    
    public int[] solution(int n, int m) {
        int[] answer = new int[] { gcd(n, m), lcm(n, m) };
        return answer;
    }
}