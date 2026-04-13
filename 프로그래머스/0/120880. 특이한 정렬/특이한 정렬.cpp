#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int temp;

bool compare(int a, int b) {
    int num1 = abs(temp - a);
    int num2 = abs(temp - b);
    
    if (num1 == num2) return a > b;
    
    return num1 < num2;
}

vector<int> solution(vector<int> numlist, int n) {
    temp = n;
    sort(numlist.begin(), numlist.end(), compare);
    return numlist;
}