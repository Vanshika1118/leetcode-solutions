class Solution {
public:
    int smallestNumber(int n) {
     int ans=0;
     for(int i=0;i<10001;i++){
     if(n>=pow(2,i))ans+=pow(2,i);
     } return ans;
    //  int k = 0;
    //     while ((1 << k) - 1 < n) {
    //         k++;
    //     }
    //     return (1 << k) - 1; }   as in the last no -1 is the sum all the previous numbers}
    }
};
// 1 2 4 8 16 32 64 128.....8-1=7(wich is sum of 1+2+4)
