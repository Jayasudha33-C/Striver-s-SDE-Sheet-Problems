class Solution {
public:
  /*  int countPath(int i,int j,int m,int n){
   1. RECURSIVE SOLUTION
        if(i==(m-1) && j==(n-1)) return 1;
        else if(i>=m || j>=n) return 0;
        else
          return countPath(i+1,j,m,n)+countPath(i,j+1,m,n);
    }
    int uniquePaths(int m, int n) {
        return countPath(0,0,m,n);
// THE TC OF RECURSIVE SOLUTION WILL BE EXPONENTIAL.
// 2. DP
   vector<vector<int>>dp(m,vector<int>(n,1));
   for(int i=1;i<m;i++){
       for(int j=1;j<n;j++){
           dp[i][j]=dp[i-1][j]+dp[i][j-1];
       }
   }
   return dp[m-1][n-1];
// TC :O(M*N)  SC :O(M*N)
*/
 // 3. COMBINATORICS SOLUTION 
  int uniquePaths(int m, int n) {
     int N=m+n-2;
     int r=m-1;
     double res=1;
     for(int i=1;i<=r;i++){
         res=res*(N-r+i)/i;
     }
     return (int)res;
    }
};

/*Time Complexity: The time complexity of this solution will be O(n-1) or  O(m-1) depending on the formula we are using.

Space Complexity: As we are not using any extra space the space complexity of the solution will be  O(1).

*/
