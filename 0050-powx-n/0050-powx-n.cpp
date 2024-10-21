class Solution {
public:
    double pow1(double x,long n)
    {
        if(n==0) return 1;
        if(n%2==0) return pow(x*x,n/2);
        else return x*pow(x,n-1);
    }
    double myPow(double x, int n) {
        long int n1;
        if(n<0) n1=(long)n*-1;
        else n1=n;
        double ans= pow1(x,n1);
        if(n<0) return 1.0/ans;
        return ans;



        
    }
};