#include <string>
#include <vector>
#include <cmath>
#include <typeinfo>
#include <iostream>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    if((int)sqrt(n) == sqrt(n))
        answer = (sqrt(n) + 1) * (sqrt(n) + 1);
    else
        answer = -1;
    
    return answer;
}
