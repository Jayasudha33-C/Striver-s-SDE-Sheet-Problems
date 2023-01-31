class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     // BRUTE- FORCE
        /*int n=size(nums),ans=INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=i,currsum=0;j<n;j++){
                currsum+=nums[j];
                ans=max(ans,currsum);
            }
        }
        return ans;
// TC:O(N*N) 
//SC :O(1)
    }
};
*/
vector<int>dp(nums);
for(int i=1;i<nums.size();i++){
    dp[i]=max(nums[i],nums[i]+dp[i-1]);  // KADANE'S ALGORITHM
}
return *max_element(dp.begin(),dp.end());
    }
};
// TC :O(N)
//SC : O(1)