class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int p=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
            if(p!=-1 && i-p<=k){return false;}
              p=i;}
        }return true;
    }
};