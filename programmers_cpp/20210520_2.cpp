#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    bool flag = false;
    
    for(int i = 0 ; i < arr.size() ; i++) {
        if(i != arr.size() - 1 && arr[i + 1] == arr[i]) {
            arr[i] = -1-i;
        }
    }
    
    for(int i = 0 ; i < arr.size() ; i++) {
        if(arr[i] >= 0)
            answer.push_back(arr[i]);
    }
    
    return answer;
}
