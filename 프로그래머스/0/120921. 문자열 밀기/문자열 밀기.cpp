#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    if (A == B) return 0;
    
    int aL = A.size();

    for (int i = 1; i <= aL; i++) {
        char tmp = A[aL - 1];

        for (int j = aL - 1; j > 0; j--) {
            A[j] = A[j - 1];
        }

        A[0] = tmp;

        if (A == B) {
            return i;
        }
    }

    return -1;
}