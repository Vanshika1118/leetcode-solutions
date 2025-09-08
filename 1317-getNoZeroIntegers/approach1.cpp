class Solution {
public:
 vector<int> getNoZeroIntegers(int n) {
      for(int i=1;i<n;i++){
         int b=n-i;
         string is=to_string(i);
         string ib=to_string(b);
         if(is.find('0')==string::npos &&ib.find('0')==string::npos)return {i,b};  // prints a huge number (npos), since '0' not found,npos can be equall to -1
      }
       return{};
       }
       
    
};

