#include <string>
#include <vector>
#include <ctype.h>

using namespace std;

string solution(string s) {
    string answer = "";
    string temp;
    vector<string> str;
    s += ' ';
    
    for(int i = 0 ; i < s.length() ; i++) {
        if(s[i] == ' ') {
            str.push_back(temp);
            temp.clear();
        }
        else
            temp += s[i];
    }
    
    for(int i = 0 ; i < str.size() ; i++) {
        for(int j = 0 ; j < str[i].length() ; j++) {
            if(j % 2 == 0)
                answer += toupper(str[i][j]);
            else
                answer += tolower(str[i][j]);
        }
        if(i != str.size() -1)
            answer += " ";
    }
    
    return answer;
}
