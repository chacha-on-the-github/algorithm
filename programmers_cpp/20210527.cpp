#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
   	vector<char> arr;
    
    for(int i = 0 ; i < s.length() ; i++) {
        arr.push_back(s[i]);
    }
    
    sort(arr.begin(),arr.end());
	
    for(int i = 0; i < arr.size() ; i++) {
    	answer += arr[arr.size()-1-i];
    }
    
    return answer;
}
