#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> divisor(int num) {
    vector<int> divs;
    
    for(int i = 1 ; i <= num ; i++) {
        if(num % i == 0)
            divs.push_back(i);
    }
    
    return divs;
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    vector<int> nDiv = divisor(n);
    vector<int> mDiv = divisor(m);
    vector<int> cm = divisor(n * m);
    bool flag = true;
    
    for(int i = 0 ; i < nDiv.size() ; i++) {
        for(int j = 0 ; j < mDiv.size() ; j++) {
            if(m % nDiv[nDiv.size()- 1 - i] == 0) {
                answer.push_back(nDiv[nDiv.size() - 1 - i]);
                flag = false;
                break;
            }
        }
        
        if(!flag)
            break;
    }
    
    for(int i = 0 ; i < cm.size() ; i++) {
        if(cm[i] % n == 0 && cm[i] % m == 0) {
            answer.push_back(cm[i]);
            break;
        }
    }
    
    return answer;
}
