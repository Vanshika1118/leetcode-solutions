class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
       vector<int>ans;
        unordered_set<int>s;
        for(int i=0;i<size(nums);i++){
            if(!s.count(nums[i]))
            s.insert(nums[i]);
            
            else ans.push_back(nums[i]);
        }return ans;
       // unordered_map<int,int>m;
        // vector<int>ans;
        // for(auto &a:nums){
        //     m[a]++;
            
        // }
        // for(auto [k,v]:m){
        //     if(v>1)ans.push_back(k);
        // }return ans;
              
    }
};