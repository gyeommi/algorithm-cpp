#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int a = sides[0];
    int b = sides[1];
    int minSide = min(a, b);
    int maxSide = max(a, b);
    answer = 2 * minSide - 1;
    return answer;
}