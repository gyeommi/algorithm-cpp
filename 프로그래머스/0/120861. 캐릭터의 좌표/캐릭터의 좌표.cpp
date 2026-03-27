#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer(2, 0);
    
    int maxX = board[0] / 2;
    int maxY = board[1] / 2;
    
    for (int i = 0; i < keyinput.size(); i++) {
        if (keyinput[i] == "up") {
            if (answer[1] + 1 <= maxY)
                answer[1] += 1;
        }
        else if (keyinput[i] == "down") {
            if (answer[1] - 1 >= -maxY)
                answer[1] -= 1;
        }
        else if (keyinput[i] == "left") {
            if (answer[0] - 1 >= -maxX)
                answer[0] -= 1;
        }
        else if (keyinput[i] == "right") {
            if (answer[0] + 1 <= maxX)
                answer[0] += 1;
        }
    }
    
    return answer;
}