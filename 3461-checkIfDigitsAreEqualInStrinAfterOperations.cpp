class Solution {
public:
    bool hasSameDigits(string s) {
       vector<int>v;int ans;
       for(auto &a:s){
        v.push_back(a-'0'); // this will convert char to digits

       } 
       
       while(v.size()>2){
        vector<int>temp;
        for(int i=0;i+1<v.size();i++){
        ans=(v[i]+v[i+1])%10;
        temp.push_back(ans);
        // v.erase(v.begin());.....not needed as are replacing out side the loop by temp
        }
       v = temp;
       }
       if(v[0]==v[1])return true;
       return false;
    }
};