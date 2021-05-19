#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    int day = 0;
    
// 1: 31, 2: 29, 3: 31, 4: 30, 5: 31, 6: 30, 7: 31, 8: 31, 9: 30, 10: 31, 11: 30, 12 : 31 
    for(int i = 1 ; i < a ; i++) {
        if(i % 2 == 1) {
               if(i > 8)
                   day += 30;
                else
                    day += 31;
        }
        else { 
            if(i == 2)
                day += 29;
            else if(i < 7)
                day += 30;
            else
                day += 31;
        }
    }
    
    switch((day + b - 1) % 7) {
        case 0:
            answer = "FRI";
            break;
        case 1:
            answer = "SAT";
            break;
        case 2:
            answer = "SUN";
            break;
        case 3:
            answer = "MON";
            break;
        case 4:
            answer = "TUE";
            break;
        case 5:
            answer = "WED";
            break;
        case 6:
            answer = "THU";
            break;
        default:
            break;
    }
    
    return answer;
}
