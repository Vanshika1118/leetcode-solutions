class Solution {
public:
    int minCost(string co, vector<int>& nt) {
        int ans=0;
        for(int i=0;i<co.size()-1;i++){
            if(co[i]==co[i+1]){
                ans+=min(nt[i],nt[i+1]);
                nt[i+1]=max(nt[i],nt[i+1])  
            }
        }return ans;
    }
};