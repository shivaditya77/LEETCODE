class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int maxscore=0;
        int score=0;
        int i=0;
        int j=tokens.size()-1;
        while(i<=j)
        {
            if(power>=tokens[i])
            {
                power-=tokens[i];
                score++;
                i++;
                maxscore=max(maxscore,score);
            }
            else if(score>=1)
            {
                power+=tokens[j];
                score--;
                j--;
            }
            else 
            {
                return maxscore;
            }
        }
        return maxscore;
        
    }
};