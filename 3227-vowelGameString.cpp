class Solution {
public:
    bool doesAliceWin(string s) {
    //   more than 1 ya odd ya even also(as can break even to odd)toh alice will win in ever case ....the only case of false will be when no vowel present
    vector<int>v;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' )v.push_back(s[i]);
    }  if(size(v)>=1 )return true;
    return false;
    }
};