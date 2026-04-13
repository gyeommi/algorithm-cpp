#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int n;
stack<int> s;  // 스택
vector<char> result;  // 정답값

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    cin >> n;
    int cnt = 1;

    for(int i=0;i<n;i++){
        int m;
        cin >> m;

        while(cnt<=m){
            s.push(cnt);
            cnt++;
            result.push_back('+');
        }

        if (m==s.top()){
            s.pop();
            result.push_back('-');
        }

        else {
            cout << "NO";
            return 0;  // 종료
        }

    }

    for(int i=0;i<result.size();i++){
        cout << result[i] << '\n';
    }

    return 0;
}
