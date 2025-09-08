class Solution {
public:
 
 bool iszero(int n){
    while(n>0){
        if(n%10==0)return false;
       n= n/10;
    }return true;
 }


    vector<int> getNoZeroIntegers(int n) {
      for(int i=1;i<n;i++){
         int b=n-i;
         if(iszero(i) &&iszero(b))return {i,b};  
      }
       return{};
       }
       
    
};