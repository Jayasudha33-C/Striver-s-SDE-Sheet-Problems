class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      /*  for(int i=0;i<nums2.size();i++){
            nums1[m+i]=nums2[i];
        }
        sort(nums1.begin(),nums1.end());
    }
};*/
// TC : O(N LOG N)+O(N)
// SC : O(1)

int i=m-1,j=n-1,tar=m+n-1;
while(j>=0){
    nums1[tar--]=i>=0 && nums1[i]>nums2[j]? nums1[i--]:nums2[j--];
    }
  }
};

// TC : O(N)
// SC : O(1)