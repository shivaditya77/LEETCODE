class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int,int>>visited;
        int x=0,y=0;
        visited.insert({x,y});

        for(int i=0;i<path.size();i++)
        {
            if(path[i]=='N')
            {
                y++;
            }
            else if(path[i]=='S')
            {
                y--;
            }
            else if(path[i]=='E')
            {
                x++;
            }
            else if(path[i]=='W')
            {
                x--;
            }
            if(visited.find({x,y})!=visited.end())
             {
            return true;;
             }
             visited.insert({x,y});
        }
        return false;
    }
};