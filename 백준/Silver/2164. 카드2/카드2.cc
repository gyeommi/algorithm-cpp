#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    queue<int> q;

    for (int i = 1; i <= n; i++) {
        q.push(i);
    }
    
     while (q.size() > 1) {
        q.pop(); // 카드 버리기

        int x = q.front();
        q.pop();
        q.push(x); // 뒤로 이동
    }

    cout << q.front();
}