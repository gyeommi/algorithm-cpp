using System;
using System.Collections.Generic;

public class Solution {
    public int[] solution(int[] arr) {
        int[] answer = new int[] {};
        List<int> lst = new List<int>(arr);
        List<int> sorted = new List<int>(arr);
        
        sorted.Sort();
        lst.Remove(sorted[0]);
        
        if (lst.Count == 0)
        {
            lst.Add(-1);
            answer = lst.ToArray();
        }
        else
        {
            answer = lst.ToArray();
            
        }
        return answer;
    }
}