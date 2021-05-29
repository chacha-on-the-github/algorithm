#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    string temp;
    
    for(int i = 0 ; i < strings.size() - 1 ; i++) {
        for(int j = 0 ; j < strings.size() - 1 - i; j++) {
            if(strings[j][n] > strings[j + 1][n]) {
                temp = strings[j];
                strings[j] = strings[j + 1];
                strings[j + 1] = temp;
            }
            
            else if(strings[j][n] == strings[j + 1][n]) {
                int k = 0;
                
                while(true) {
                    if(strings[j][k] != strings[j + 1][k]) {
                        if(strings[j][k] > strings[j + 1][k]) {
                            temp = strings[j];
                            strings[j] = strings[j + 1];
                            strings[j + 1] = temp;
                            break;
                        }
                        else
                            break; 
                    }
                    else
                        k++;
                        
                }
            }
        }
    }
    
    for(int i = 0 ; i < strings.size() ; i++) {
        answer.push_back(strings[i]);
    }
       
    
    return answer;
}
