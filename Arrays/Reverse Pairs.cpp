class Solution {
public:
    int reversePairs(vector<int>& nums) {
  //  1. BRUTE-FORCE
        int pairs=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if((long long)nums[i]>(long long)2*(long long)nums[j])
                    pairs++;
            }
        }
        return pairs;
    }
};
// TC : O(N*N)
// SC :O(1)