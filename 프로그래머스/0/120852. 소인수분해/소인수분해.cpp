#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

vector<int> solution(int n) {
    set<int> factors;
    
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            factors.insert(i); // 중복 제거를 위해 set 사용
            n /= i;
        }
    }
    
    vector<int> answer(factors.begin(), factors.end());
    return answer;
}