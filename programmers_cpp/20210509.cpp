#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int correctNum = 0;
    int unknownNum = 0;
    int max;
    
    for(int i = 0 ; i < 6 ; i++) {
        if(lottos[i]==0)
            unknownNum++;
        
        for(int j = 0 ; j < 6 ; j++) {
            if(lottos[i]==win_nums[j]) {
                correctNum++;
                break;
            }
        }
    }
    
    max = correctNum + unknownNum;
    
    switch (max) { 
        case 6: 
            answer.push_back(1); 
            break; 
        case 5: 
            answer.push_back(2);
            break; 
        case 4: 
            answer.push_back(3);
            break; 
        case 3: 
            answer.push_back(4);
            break; 
        case 2: 
            answer.push_back(5);
            break; 
        default: 
            answer.push_back(6);
            break; 
    }

switch (correctNum) { 
        case 6: 
            answer.push_back(1); 
            break; 
        case 5: 
            answer.push_back(2);
            break; 
        case 4: 
            answer.push_back(3);
            break; 
        case 3: 
            answer.push_back(4);
            break; 
        case 2: 
            answer.push_back(5);
            break;
        default: 
            answer.push_back(6);
            break; 
    }
    
   
    
    
    return answer;
}
