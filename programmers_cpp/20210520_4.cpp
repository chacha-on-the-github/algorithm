#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    
    if(a == b)
        answer = a;
   	 	
    else if(a > b)
    	for(b ; b < a + 1 ; b++)
            answer+=b;
    	
    else 
         for(a ; a < b + 1 ; a++)
            answer+=a;
    
    return answer;
}
