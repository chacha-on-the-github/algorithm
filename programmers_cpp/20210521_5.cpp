#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
   	string maps[2];
    string line;
    
    for(int i = 0 ; i < n ; i++) {
    	maps[0] = "";
        maps[1] = "";
        line="";
        
    	for(int j = n - 1 ; j >= 0 ; j--) {
       		maps[0] = to_string(arr1[i] / (int)pow(2,j));  
        	maps[1] = to_string(arr2[i] / (int)pow(2,j));
            arr1[i] = arr1[i] % (int)pow(2,j);
        	arr2[i] = arr2[i] % (int)pow(2,j);
        	
        	if(maps[0] == "0" && maps[0] == maps[1])
        		line += " ";
        	else
            	line += "#";
    	}
        
        answer.push_back(line);    
    }
    
    return answer;
}
