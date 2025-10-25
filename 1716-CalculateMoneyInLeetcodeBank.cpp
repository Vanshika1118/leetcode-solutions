class Solution {
public:
    int totalMoney(int n) {
        int s{};int i=1,cu=0;int j=0;
      while(cu<n){
       cu++;
        j++;
        s+=j;
        if(cu%7==0){ i++;j=i-1;}
       /* or can use the formula directly
        int weeks = n / 7;
        int days = n % 7;
        
        // Full weeks sum: each week increases by +1 in every term
        int total = 28 * weeks + 7 * (weeks - 1) * weeks / 2;
        */

      } return s; 
    }
};