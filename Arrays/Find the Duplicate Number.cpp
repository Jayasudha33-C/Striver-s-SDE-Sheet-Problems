lass Solution {
public:
    int findDuplicate(vector<int>& nums) {
     /*   unordered_set<int>st;
        int res;
        for(int i=0;i<nums.size();i++){
            if(st.erase(nums[i]))
              res=nums[i];
            st.insert(nums[i]);
        }
        return res;
    }
};
TC : O(N)
SC : O(N)
*/
// TWO -POINTER LOGIC
int slow=nums[0],fast=nums[0];
do{
    slow=nums[slow];
    fast=nums[nums[fast]];
}while(slow!=fast);
fast=nums[0];
while(slow!=fast){
    slow=nums[slow];
    fast=nums[fast];
}
return slow;
    }
};

// TC:O(N)
// SC:O(1)