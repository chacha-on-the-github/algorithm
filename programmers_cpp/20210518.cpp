#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
 	
    for(int i = 0 ; i < numbers.size() ; i++) {
        for(int j = i + 1 ; j < numbers.size() ; j++) {
            bool flag = true;
            
            for(int k = 0 ; k < answer.size() ; k++) {
                if(answer[k] == numbers[i] + numbers[j])
                	flag = false; 
            }
            
            if(flag)
                answer.push_back(numbers[i]+numbers[j]);
        }
    }
	
    sort(answer.begin(),answer.end());
    return answer;
}
