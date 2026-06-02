using System;

public class Solution {
    public int[] solution(string[] park, string[] routes) {        
        int w = park[0].Length;
        int h = park.Length;
        int x = 0;
        int y = 0;
        
        int tmpX;
        int tmpY;
        
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                if (park[i][j] == 'S')
                {
                    x = j;
                    y = i;
                    break;
                }
            }
        }
        
        for (int i = 0; i < routes.Length; i++)
        {
            tmpX = x;
            tmpY = y;
            
            if (routes[i][0] == 'N')
                tmpY -= routes[i][2] - '0';
            else if (routes[i][0] == 'S')
                tmpY += routes[i][2] - '0';
            else if (routes[i][0] == 'W')
                tmpX -= routes[i][2] - '0';
            else if (routes[i][0] == 'E')
                tmpX += routes[i][2] - '0';
            
            if(tmpX < w && tmpX > -1 && tmpY < h && tmpY > -1)
            {
                bool isValid = true;
                if (tmpX > x)
                {
                    for (int j = x; j <= tmpX; j++)
                    {
                        if (park[y][j] == 'X')
                        {
                            isValid = false;
                            break;
                        }
                    }
                }
                else if (tmpX < x)
                {
                    for (int j = tmpX; j <= x; j++)
                    {
                        if (park[y][j] == 'X')
                        {
                            isValid = false;
                            break;
                        }
                    }
                }
                else if (tmpY > y)
                {
                    for (int j = y; j <= tmpY; j++)
                    {
                        if (park[j][x] == 'X')
                        {
                            isValid = false;
                            break;
                        }
                    }
                }
                else if (tmpY < y)
                {
                    for (int j = tmpY; j <= y; j++)
                    {
                        if (park[j][x] == 'X')
                        {
                            isValid = false;
                            break;
                        }
                    }
                }
                
                if (isValid)
                {
                    x = tmpX;
                    y = tmpY;
                }
            }
        }
        int[] answer = new int[2] {y, x};
        return answer;
    }
}