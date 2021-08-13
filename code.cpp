class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<int>visit(rooms.size(),0);
        queue<int>q;
        q.push(0);
        visit[0]=1;
        while(!q.empty())
        {
            int p=q.front();
            q.pop();
            for(auto s:rooms[p])
            {
                if(visit[s]!=1)
                {
                    q.push(s);
                    visit[s]=1;
                }
            }
        }
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
