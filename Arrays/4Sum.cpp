class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        set<vector<int>>st;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int a=0;a<n-3;a++){
            for(int b=a+1;b<n-2;b++){
                int c=b+1,d=n-1;
                while(c<d){
                    long long sum=(long long)nums[a]+nums[b]+nums[c]+nums[d];
                    if(sum==target){
                       st.insert({nums[a],nums[b],nums[c],nums[d]});
                       c++;
                       d--;
                       }
                    else if(sum<target)c++;
                    else d--;
                }
            }
        }
        for(auto i:st) ans.push_back(i);
        return ans;
    }
};
// TC :O(N*N*N) SC:O(1) Generally the space complexity that is used to return the answer is ignored