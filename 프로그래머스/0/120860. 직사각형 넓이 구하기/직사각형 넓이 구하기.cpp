#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    int minX = dots[0][0];
    int maxX = dots[0][0];
    int minY = dots[0][1];
    int maxY = dots[0][1];
    
    for (int i = 1; i < dots.size(); i++) {
        minX = min(minX, dots[i][0]);
        maxX = max(maxX, dots[i][0]);
        minY = min(minY, dots[i][1]);
        maxY = max(maxY, dots[i][1]);
    }
    
    answer = (maxX - minX) * (maxY - minY);
    return answer;
}