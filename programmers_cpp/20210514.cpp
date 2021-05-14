#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    vector<int> result;
    int answer = 0;
    int col,j,data; 
    
    for(int i = 0 ; i < moves.size() ; i++) {
        col = moves[i]-1;
        j = 0;
        
        while(j < board.size()) {
            if(board[j][col] != 0) {
                data = board[j][col];
                board[j][col]=0;
                
                if(result.empty())
                    result.push_back(data);
                
                else {
                    if(data == result.back()) {
                        answer += 2;
                        result.pop_back();
                    }
                
                    else 
                        result.push_back(data);
                }
                
                break;
            }
            
            else
                j++;
        }
    }
    
    return answer;
}
