#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    
    
    if(x % (x / 1000 + (x % 1000) / 100 + ((x % 1000) % 100) / 10 + (((x % 1000) % 100) % 10) / 1) != 0)
        answer = false;
    
    return answer;
}
