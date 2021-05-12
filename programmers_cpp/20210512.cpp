#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {
    string answer = "";
    
    for (int i = 0 ; i < new_id.size() ; i++) { // Step 1
        answer+=tolower(new_id[i]);    
    }
    
    for (int i = 0 ; i < answer.size() ; i ++) { // Step 2
        if(answer[i] == '.' || answer[i] == '-' || answer[i] == '_') 
            continue;
        else if((int)answer[i] >= 97 && (int)answer[i] <= 122) 
            continue;
        else if((int)answer[i] >= 48 && (int)answer[i] <= 57)
            continue;
        else {
            answer.erase(i,1);
            i--;
        }
    }
    
    for (int i = 0 ; i < answer.size()-1 ; i++) { // Step 3
        if( answer[i] == '.' ) {
            if( answer[i] == answer[i+1] ) {
                answer.erase(i+1,1);        
                i--;
            }
        }
    }
    
    if(answer[0] == '.') // Step 4
        answer.erase(0,1);

    if(answer[answer.size()-1] == '.') 
        answer.erase(answer.size()-1,1);
    
    if(answer.size() == 0) // Step 5
        answer+='a';
    else if(answer.size()>=16) { // Step 6
        answer.erase(15,answer.size()-15);
        if(answer[14]=='.')
            answer.erase(14,1);
    }
    
    if(answer.size() <= 2) {    // Step 7
    while(answer.size() < 3)
        answer+=answer[answer.size()-1];
    }
    
    return answer;
}
