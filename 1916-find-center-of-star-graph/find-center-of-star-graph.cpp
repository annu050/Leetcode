class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int m=edges.size();
        int n=edges[0].size();
        unordered_map<int,int>mp;
        for(int i=0;i<m;i++){
            mp[edges[i][0]]++;
            mp[edges[i][1]]++;
        }
        int ans=0;
        for(auto i:mp){
            if(i.second>m-1){
                ans= i.first;
            }
        }
        return ans;
    }
};