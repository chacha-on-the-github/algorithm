#include <string>
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int solution(string dartResult) {
    int answer = 0;
    vector<int> num;
    int cnt;
    
    for(int i = 0 ; i < dartResult.length() ; i++) {
        switch(dartResult[i]) {
            case '1':
                if(dartResult[i + 1] == '0') {
                	i++;
                    num.push_back(10);
                }
                
                else 
                    num.push_back(1);
                
                break;
            
            case '#':
                num[num.size() - 1] *= -1;
                break;
            
            case '*':
                if(num.size() == 1)
                    num[0] *= 2;
                else {
                    num[num.size() - 1] *= 2;
                    num[num.size() - 2] *= 2;
                }
                break;
            
            case 'S':
                break;
            
            case 'D':
                num[num.size() - 1] *= num[num.size() - 1];
                break;
            
            case 'T':
                num[num.size() - 1] *= num[num.size() - 1] * num[num.size() - 1];
                break;
            
            default:
            	num.push_back((int)dartResult[i] - 48);
                break;
        }   
    }
    
    answer = num[0] + num[1] + num[2];
    return answer;
}
