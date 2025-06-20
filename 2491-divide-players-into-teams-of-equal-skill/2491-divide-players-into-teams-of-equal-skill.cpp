class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n=skill.size();
        sort(skill.begin(),skill.end());
        int i=0;
        int j=n-1;
        int s=skill[i]+skill[n-1];

        long long chem=0;
        while(i<=j)
        {
            int k=skill[i]+skill[j];
            if(k!=s)
            {
                return -1;
            }
            chem+=(long long)(skill[i]) * (long long) (skill[j]);
            i++;
            j--;
        }
        return chem;
    }
};