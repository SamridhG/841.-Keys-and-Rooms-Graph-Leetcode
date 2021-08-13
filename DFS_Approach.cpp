class Solution {
public:
    void dfs(int node,vector<vector<int>>& rooms,vector<int>&visit)
    {
        visit[node]=1;
        for(auto s:rooms[node])
        {
            if(visit[s]!=1)
            {
                dfs(s,rooms,visit);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<int>visit(rooms.size(),0);
        dfs(0,rooms,visit);
        for(auto s:visit)
        {
            if(s==0)
            {
                return false;
            }
        }
        return true;
    }
};
