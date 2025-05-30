class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int>mp;
        for(int i=0;i<answers.size();i++)
        {
            mp[answers[i]]++;
        }
      
        int count=0;
        for(auto &it:mp)
        {
            int nor=it.first+1;
            int group=ceil(double(it.second)/nor);
            count+=(nor*group);
        }
        return count;
    }
};