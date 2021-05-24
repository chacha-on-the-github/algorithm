#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num) {
    int answer = -1;
    unsigned long long n = num;
    
    for(int i = 1 ; i <= 500 ; i++){
        if(n == 1) {
            answer = i - 1;
            break;
        }
        
        if(n % 2 == 0) {
            n /= 2;
        }
        else {
            n *= 3;
            n++;
        }
    }
    
    return answer;
}
