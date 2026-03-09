#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0, min = 100, index = 0;;
    
    for (int i = 0; i < array.size(); i++) {
        int diff = abs(array[i] - n);
        
        if (min > diff || (min == diff && array[i] < array[index])) {
            min = diff;
            index = i;
        }
    }
    answer = array[index];
    return answer;
}