#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    int length;
    int t; 
    
    for (int i = 0 ; i < commands.size() ; i++) {
        vector<int> temp;
        length = commands[i][1] - commands[i][0] + 1;
        
        for(int j = 0 ; j < length ; j++)
            temp.push_back(array[commands[i][0]-1+j]);
        
        // for(int j = 0 ; j < length ; j++) {
        //     if(temp[j] > temp[j+1]) {
        //         t = temp[j];
        //         temp[j] = temp[j+1];
        //         temp[j+1] = t;
        //     }
        // }
        
        sort(temp.begin(),temp.end());
        
        answer.push_back(temp[commands[i][2]-1]);
    }
    
    return answer;
}
