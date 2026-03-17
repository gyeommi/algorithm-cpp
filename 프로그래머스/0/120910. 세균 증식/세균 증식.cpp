#include <string>
#include <vector>

using namespace std;

int solution(int n, int t) {
    int answer = 0;
    answer = (1 << t)*n;
    return answer;
}