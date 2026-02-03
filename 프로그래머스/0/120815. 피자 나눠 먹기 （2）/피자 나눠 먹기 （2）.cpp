#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int pv = 0;
    
    while (pv == 0 || pv % n != 0) {
        pv += 6;
        answer++;
    }
    return answer;
}