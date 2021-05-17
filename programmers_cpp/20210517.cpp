#include <string>
#include <vector>

using namespace std;

bool checkArr(int num,vector<int> arr) {
    for(int i = 0 ; i < arr.size() ; i++) {
        if(arr[i] == num)
            return true;
        if(arr[i] != num && i == arr.size() - 1)
            return false;
    }
}

int solution(int left, int right) {
    int answer = 0;
    vector<int> pow; 
    
    for(int i = 1 ; i * i  <= right ; i++) {
        if(i * i >= left)
            pow.push_back(i*i);
    } 
    
    
    for(int i = left ; i < right + 1 ; i++) {
        if(checkArr(i,pow))
            answer -= i;
        else 
            answer+=i;
    }
    
    return answer;
}
