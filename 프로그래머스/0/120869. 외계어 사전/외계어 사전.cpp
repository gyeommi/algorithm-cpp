#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    sort(spell.begin(), spell.end());
    string s = "";
    for(string str : spell) s += str;
    for(string d : dic) {
        sort(d.begin(), d.end());
        if(s == d) return 1;
    }

    return 2;
}