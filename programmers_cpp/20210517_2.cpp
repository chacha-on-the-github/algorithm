#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int findMax(vector<float> arr) {
    float max = arr[0];
    int ind = 0;
    
    for(int i = 1 ; arr.size() > i ; i++) {
        if(arr[i] > max) {
            max = arr[i];
            ind = i;
        }
    }
    
    return (ind+1);
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<int> clear;
    vector<int> reach;
    vector<float> fail;
    
    for(int i = 1 ; i < N + 1 ; i++) {
        reach.push_back(0);
        clear.push_back(0);
        
        for(int j = 0 ; j < stages.size() ; j++) {
            if(stages[j] > i) {
                clear[i-1]++;
                reach[i-1]++;
            }
            else if(stages[j] == i) {
                reach[i-1]++;
            }
        }
        
       
        if(reach[i-1] == 0)
            fail.push_back(0);
        else
            fail.push_back((float)(reach[i-1] - clear[i-1]) / (float)reach[i-1]);
    }
    
    int max;
    for(int i = 0 ; i < fail.size() ; i++) {
        max = findMax(fail);    
        answer.push_back(max);
        fail[max-1] = -1;
    }
     
    return answer;
}
