class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     /*1. NAIVE APPROACH
        vector<int>res;
       for(int i=0;i<nums.size();i++){
           for(int j=i+1;j<nums.size();j++){
               if(nums[i]+nums[j]==target){
                   res.push_back(i);
                   res.push_back(j);
               }
           }
           if(res.size()==2)break;
       }
       return res;
TC : O(N*N) SC : O(1)
       */
      // 2. TWO-POINTER APPROACH TC:O(N LOG N) SC :O(N)
      // 3. HASHING TC : O(N) SC:O(N)
      unordered_map<int,int>mp;
      vector<int>res;
      for(int i=0;i<nums.size();i++){
          if(mp.find(target-nums[i])!=mp.end()){
              res.emplace_back(i);
              res.emplace_back(mp[target-nums[i]]);
          }
          mp[nums[i]]=i;
      }
      return res;
    }
};