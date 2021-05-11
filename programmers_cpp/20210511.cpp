#include <string>
#include <vector>
 #include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
/*
    sort(lost.begin(),lost.end());
    sort(reserve.begin(),reserve.end());
    
     int answer = n - lost.size();
     bool flag = true;
     vector<int>  used;
   
         for(int i = 0 ; i < lost.size() ; i++) { // 여벌의 체육복을 가지고 있는 학생들이 체육복을 도난 당한 경우
             for(int j = 0 ; j < reserve.size() ; j++) {
                 if(lost[i]==reserve[j]) {
                     answer++;
                     used.push_back(reserve[j]);
                     break;
                 }
             }
         }
    
         for(int i = 0 ; i < lost.size() ; i++) { 
             for(int j = 0 ; j < reserve.size() ; j++) {
                if(lost[i]!=reserve[j]) { // 여벌의 체육복을 가지고 있지 않은 학생들이 체육복을 도난 당한 경우
                     if(lost[i] - 1 == reserve[j]) { 
                         for(int k = 0 ; k < used.size() ; k++) {
                             if(reserve[j]==used[k]) {
                                 flag = false;                                                      
                                 break;
                             }
                         }
                    
                         if(flag) {
                             answer++;
                             used.push_back(reserve[j]);
                             break;
                         }
                         
                         else 
                             flag = true;
                     }
                
                      if(lost[i] + 1 == reserve[j]) {
                         for(int k = 0 ; k < used.size() ; k++) {
                             if(reserve[j]==used[k]) {
                                 flag = false;
                                 break;
                             }
                         }
                    
                         if(flag) {
                             answer++;
                             used.push_back(reserve[j]);
                         }
                         
                         else
                             flag = true;
                     }
                 }    
             }
         }

    
*/
    int answer = 0;
    int arr[n+2];
    
    for(int i = 0 ; i < n+2 ; i++) {
        arr[i]=1;
        
        for(int j = 0 ; j < lost.size() ; j++) { 
            if(lost[j]==i) {
                arr[i]--;
                break;
            }
        }
        
        for(int j = 0 ; j < reserve.size() ; j++) {
            if(reserve[j]==i) {
                arr[i]++;
                break;
            }
            
        }
    }
    
    for(int i = 1 ; i < n+1 ; i++) {
        if(arr[i]==0){
            if(arr[i-1]==2){
                arr[i-1]--;
                arr[i]++;
            }
            else if(arr[i+1]==2){
                arr[i+1]--;
                arr[i]++;
            }
        }
    }
    
    for(int i = 1 ; i < n+1 ; i++) {
        if(arr[i] > 0)
            answer++;
    }

    return answer;
}
