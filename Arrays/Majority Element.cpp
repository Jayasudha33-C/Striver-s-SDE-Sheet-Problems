class Solution {
public:
    int majorityElement(vector<int>& nums) {
       /*int n=nums.size()/2;
       sort(nums.begin(),nums.end());
       return nums[n];
 }
};
 TC:O(N LOG N)
 SC :O(1)
*/

// MOORE'S VOTING ALGORITHM
 int count=0;
 int candidate=0;
 for(int num:nums){
     if(count==0)
         candidate=num;
    if(num==candidate)
        count++;
    else count--;
 }
 return candidate;
  }
};

// TC:O(N)  SC:O(1)