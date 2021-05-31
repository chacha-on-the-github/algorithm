#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> primes={3};
    
    for(int i = 2 ; ( 2* i + 1) * (2 * i + 1) <= n ; i++) {
        bool prime = true;
        int num = 2 * i + 1;
        
        for(int j = 1 ; (2 * j + 1) < num ; j++) {
            if(i % (2 * j + 1) == 0) {
                bool prime = false;
                break;
            }
        }
        
        if(prime) 
            primes.push_back(num);
    }
    
    if(n >= 2)
        answer++;
    
    if(n >= 3)
        answer++;
    
    for(int i = 2 ; 2 * i + 1 <= n ; i++) {
        int num = 2 * i + 1;
        bool prime = true;
        
        for(int j = 0 ; j < primes.size() ; j++) {
            if(num % primes[j] == 0 && num != primes[j]) {
                prime = false;
                break;
            }
        }
        
        if(prime)
            answer++;
    }

    return answer;
}
