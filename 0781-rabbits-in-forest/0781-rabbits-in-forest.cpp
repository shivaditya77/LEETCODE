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
            int nor=it.first+1;//{1,1,2} 1->2  mtlb 1rabbit bol raha mere colour ka 1 rabbit hain toh khud nhi gin raha hain isliye total=it.first+1
            int group=ceil(double(it.second)/nor);//kitne group mein rakhna hain rabbit ko usi ka formula hain suppose 2->1 1hi rabbit keh raha mere jaise 2 toh (1/3) 0 naa hojaye isliye ceil value le liye hain
            count+=(nor*group);
        }
        return count;
    }
};