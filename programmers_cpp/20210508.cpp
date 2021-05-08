#include <string>
#include <vector>

using namespace std;

int distance(int a,int b) {
    int keypad[3][4] = {
        {1,4,7,10},
        {2,5,8,0},
        {3,6,9,12}
    };
    
    int row = 0;
    int col = 0;
    bool flag = false;
    
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 4 ; j++)
        {
            if(keypad [i][j] == a)
            {
                row = i;
                col = j;
                flag = true;
                break;
            }
        }
        if(flag)
            break;
    }
    
    flag = false;
    
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 4 ; j++){
            if(keypad[i][j] == b){
                row -= i;
                col -= j;
                flag = true;
                break;
            }
        }
        if(flag)
            break;
    }
    
    if(row < 0)
        row*=-1;
    if(col < 0)
        col*=-1;
    
    return (col+row);
}

string solution(vector<int> numbers, string hand) {
    string answer = "";
    int lLoc=10;
    int rLoc=12;
    
    for (int i = 0 ; i < numbers.size() ; i++)
    {
        if(numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7)
        {    
            answer+="L";
            lLoc = numbers[i];
        }
        
        else if(numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9)
        {
            answer+="R";
            rLoc = numbers[i];
        }
        
        else // 2,5,8,0
        {
            if(distance(lLoc,numbers[i]) < distance(rLoc,numbers[i]))
            {  
               answer += "L";
               lLoc = numbers[i];
            }
            else if(distance(lLoc,numbers[i]) > distance(rLoc,numbers[i]))
            {
                answer += "R";
                rLoc = numbers[i];
            }
            else
            {
                if(hand=="right")
                {
                    answer += "R";
                    rLoc = numbers[i];
                }
                else
                {
                   answer += "L";
                   lLoc = numbers[i];
                }
            }
        }
    }
    
    
    return answer;
}
