class Solution {
public:
    int maxFreqSum(string s) {
        int fv=0,fc=0;
        int m1[26]={0};//using array as fixed size here
        for(int i=0;i<s.size();i++){
            int n=s[i]-'a';  //'a'=0 index ...
            if(s[i]=='a'|| s[i]=='o'||s[i]=='e'||s[i]=='i'||s[i]=='u'){fv=max(fv,++m1[n]);}

            else{fc=max(fc,++m1[n]);}// need pre increment as first the freq. must increase,then have to compare
        }
        return fv+fc;
    }
};