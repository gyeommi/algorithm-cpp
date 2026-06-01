using System;
using System.Collections.Generic;

public class Solution {
    public long solution(string numbers) {
        List<string> lst = new List<string>()
        {
            "zero", "one", "two", "three", "four",
            "five", "six", "seven", "eight", "nine"
        };

        for (int i = 0; i < lst.Count; i++)
        {
            numbers = numbers.Replace(lst[i], i.ToString());
        }

        return long.Parse(numbers);
    }
}