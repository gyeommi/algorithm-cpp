#include <string>
#include <vector>

using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
    
    int i = bin1.length()-1;
    int j = bin2.length()-1;
    int carry = 0;
    
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        
        if (i >= 0) sum += bin1[i--] - '0';
        if (j >= 0) sum += bin2[j--] - '0';
        
        answer = char(sum % 2 + '0') + answer;
        carry = sum / 2;
    }
    
    return answer;
}