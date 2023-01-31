class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
     // 1. BRUTE - FORCE 
      /*  int count;
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            count=1;
            for(int j=i+1;j<n;j++){
                if(nums[j]==nums[i])
                     count++;
            }
            if(count>(n/3))
                 ans.push_back(nums[i]);
        }
        return ans;
    */
// TC : O(N*N) SC:O(1)
    
// 2. USING UNORDERED_MAP
  /*  int n=nums.size();
    unordered_map<int,int>mp;
    vector<int>ans;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }
    for(auto x:mp){
        if(x.second > (n/3))
           ans.push_back(x.first);
    }
  return ans;
    }
};*/
// TC :O(N) SC:O(N)

// 3.BOYER MOORE'S VOTING ALGORITHM
// TC:O(N) SC:O(1)
   int n=nums.size();
   int nums1=-1,nums2=-1,count1=0,count2=0,i;
   for(i=0;i<n;i++){
       if(nums[i]==nums1){
           count1++;
       }
       else if(nums[i]==nums2){
           count2++;
       }
       else if(count1==0){
           nums1=nums[i];
           count1++;
       }
       else if(count2==0){
           nums2=nums[i];
           count2++;
       }
       else{
           count1--;
           count2--;
       }
   }
   vector<int>ans;
   count1=count2=0;
   for(i=0;i<n;i++){
       if(nums[i]==nums1)
       count1++;
       else if(nums[i]==nums2)
        count2++;
   }
   if(count1>(n/3))
       ans.push_back(nums1);
    if(count2>(n/3))
        ans.push_back(nums2);
    return ans;
    }