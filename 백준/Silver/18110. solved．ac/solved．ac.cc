#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, a, sum = 0;
    cin >> n;

    if (n == 0) {
        cout << 0;
        return 0;
    }

    vector<int> lv_array;

    for (int i = 0; i < n; i++) {
        cin >> a;
        lv_array.push_back(a);
    }

    sort(lv_array.begin(), lv_array.end());

    int cut = (int)(n * 0.15 + 0.5);

    for (int j = cut; j < n - cut; j++){
        sum += lv_array[j];
    }

    int answer = (int)((double)sum / (n - 2 * cut) + 0.5);
    cout << answer;

    return 0;
}