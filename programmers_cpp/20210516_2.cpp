#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int i = 1;
    vector<int> tri;
    
    while(true) {  // dec to tri
          if(n > i)
            i*=3;
          else if (n == i)
            return 1;
          else {
           i /= 3; 
            break;
          }
    }
   
    while(true) {
        tri.push_back(n / i);
        n = n % i;
        i/=3;
        
        if(i == 1) {
           tri.push_back(n);
           break;
        }
    }
    
    i = 1;
    
    for(int j = 0  ; j < tri.size() ; j++) { // tri to dec
        answer += tri[j] * i;
        i*=3;
    }
    
    return answer;
}
