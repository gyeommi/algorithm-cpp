using System;

public class Solution {
    public int[] solution(string[] keyinput, int[] board) {
        int[] answer = new int[] {0, 0};
        int maxX = board[0] / 2;
        int maxY = board[1] / 2;

        foreach (string key in keyinput)
        {
            if (key == "up" && answer[1] < maxY) answer[1]++;
            else if (key == "down" && answer[1] > -maxY) answer[1]--;
            else if (key == "left" && answer[0] > -maxX) answer[0]--;
            else if (key == "right" && answer[0] < maxX) answer[0]++;
        }

        return answer;
    }
}