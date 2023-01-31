class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxarr=0,maxso=0;
        for(int i=1;i<prices.size();i++){
            maxarr=max(0,maxarr+=prices[i]-prices[i-1]); // KADANE'S ALGORITHM
            maxso=max(maxso,maxarr);
        }
        return maxso;
    }
};
// TC:O(N)
//SC:O(1)