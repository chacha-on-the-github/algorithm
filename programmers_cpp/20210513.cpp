#include <vector>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int select = nums.size() / 2;
    vector<int> variety;
    
    for(int i = 0 ; i < nums.size() ; i++) {
        if(i==0)
            variety.push_back(nums[i]);
        else {
            for(int j = 0 ; j < variety.size() ; j++){
                if(variety[j]==nums[i])
                    break;
                if(j == variety.size()-1 && variety[j] != nums[i]){
                    variety.push_back(nums[i]);
                    break;
                }
            }
        }
    }
    
    if(select >= variety.size())
        answer = variety.size();
    else
        answer = select;
    
    return answer;
}
