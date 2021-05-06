#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int a = 0;
    int b = 0;
    int c = 0;
    int aArr[5]={1,2,3,4,5};
    int bArr[8] = {2,1,2,3,2,4,2,5};
    int cArr[10] = {3,3,1,1,2,2,4,4,5,5};
    
    for(int i = 0 ; i < answers.size() ; i++) {
        if(answers[i]==aArr[i%5])
            a++;
        if(answers[i]==bArr[i%8])
            b++;
        if(answers[i]==cArr[i%10])
            c++;
    }
    

    if(a > b) 
    {
        if(b > c)
            answer.push_back(1);
        
        else if(b < c)
        {
            if(c > a)
                answer.push_back(3);
            else if(c < a)
                answer.push_back(1);
            else // c == a
            {
            answer.push_back(1);
            answer.push_back(3);
            }
        }
        
        else // b == c
            answer.push_back(1);
    }
    
    else if(b > a)
    {
        if(a > c)
            answer.push_back(2);
        else if(a < c)
        {
            if(b > c)
                answer.push_back(2);
            else if(b < c)
                answer.push_back(3);
            else // b == c
            { 
                answer.push_back(2);
                answer.push_back(3);
            }
        }
        else // a == c
            answer.push_back(2);
    }
    
    else // a == b
    { 
        if(a==c)
        {
            answer.push_back(1);
            answer.push_back(2);
            answer.push_back(3);
        }
        else if(a < c)
            answer.push_back(3);
        else
        {
            answer.push_back(1);
            answer.push_back(2);
        }
    }
    
    return answer;
}
