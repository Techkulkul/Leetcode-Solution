class Solution {
public:
    double pow1(double x,long n)
    {
        if(n==0) return 1;
        if(n%2==0) return pow(x*x,n/2);
        else return x*pow(x,n-1);
    }
    double myPow(double x, int n) {
        long int n1=n;
        if(n1<0) n1=n1*-1;
        double ans= pow1(x,n1);
        if(n<0) return (double)1/ans;
        return ans;    
    }
};