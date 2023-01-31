vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int xor1,x=0,y=0,n=A.size();
    xor1=A[0];
    for(int i=1;i<A.size();i++){
      xor1=xor1^A[i];
    }
    for(int i=1;i<=n;i++){
      xor1=xor1^i;
    }
    int setbit=xor1 & ~(xor1-1)
}