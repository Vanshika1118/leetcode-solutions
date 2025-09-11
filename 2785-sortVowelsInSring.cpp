class Solution {
public:
    string sortVowels(string s) {
    //    return{};
    vector<int>v,va;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {v.push_back(i);
        va.push_back(s[i]);}
    }
    sort(begin(va),end(va));

    for(int i=0;i<v.size();i++){
        s[v[i]]=va[i];
    }
    return s;
    }
};
