#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    // a ~ z :  97 ~ 122 , A ~ Z : 65 ~ 90
    string answer = "";
    
    for(int i = 0 ; i < s.length() ; i++) {
        
        if(s[i] == ' ') 
            answer += ' ';
        
        else if(s[i] >= 97 && s[i] <= 122) {
             if((int)s[i] + n > 122) 
                answer += (int)s[i] + n - 26;
             else 
              	answer += (int)s[i] + n;       
        }
        
        else if(s[i] >= 65 && s[i] <= 90) {
             if((int)s[i] + n > 90) 
                answer += (int)s[i] + n - 26;
             else
    			answer += (int)s[i] + n; 
    	}
    }
    
    return answer;
}
