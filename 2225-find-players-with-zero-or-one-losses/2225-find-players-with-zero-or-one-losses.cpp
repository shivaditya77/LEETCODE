class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int>lost_map;

        for(int i=0;i<matches.size();i++)
        {
           int lost=matches[i][1];
           lost_map[lost]++;

        }

        vector<int>notlost;
        vector<int>lostonce;

        for(int i=0;i<matches.size();i++)
        {
            int winner=matches[i][0];
            int lost=matches[i][1];

            if(lost_map.find(winner) == lost_map.end())
            {
                 notlost.push_back(winner);
                 lost_map[winner]=2;
            }

            if(lost_map[lost]==1)
            {
                lostonce.push_back(lost);
            }
        }

        sort(notlost.begin(),notlost.end());
        sort(lostonce.begin(),lostonce.end());

        return {notlost,lostonce};
    }
};