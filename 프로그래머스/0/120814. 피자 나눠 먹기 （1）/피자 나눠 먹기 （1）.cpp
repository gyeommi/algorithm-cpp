#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int pv = 0;
    
    while(pv < n) {
        pv += 7;
        answer++;
    }
    return answer;
}