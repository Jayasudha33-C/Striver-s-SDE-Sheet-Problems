class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
// 1. NAIVE APPROACH
       /* if(nums.size()==0)return 0;
        sort(nums.begin(),nums.end());
        int prev=nums[0],ans=1,curr=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==prev+1){
                curr++;
            }
            else if(nums[i]!=prev){
                curr=1;
            }
            prev=nums[i];
            ans=max(ans,curr);
        }
        return ans;
    }
};

// TC : O(N* LOG N) SC : O(1)
*/
// 2. HASHING TC : O(N) SC: O(N)
      set<int>st;
      int longestStreak=0;
      for(int num:nums){
          st.insert(num);
      }
      for(int num:nums){
          if(!st.count(num-1)){
             int curr=num;
              int currentStreak=1;
          while(st.count(curr+1)){
              curr++;
              currentStreak++;
          }
          longestStreak=max(longestStreak,currentStreak);
      }}
      return longestStreak;
    }
};