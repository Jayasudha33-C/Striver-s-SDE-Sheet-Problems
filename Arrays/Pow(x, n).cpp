class Solution {
public:
    double myPow(double x, int n) {
       // BINARY EXPONENTIATION 
       double res=1.0;
       for(int i=n;i!=0;i/=2){
           if(i%2) res*=x;
           x*=x;
       }
       return n<1?1/res:res;
    }
};