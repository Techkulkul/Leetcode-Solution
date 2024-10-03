class Solution {
public:
    int arr[30]={0};
    int fib(int n) {
        if(n<=1) return n;
        if(arr[n-1]==0) arr[n-1]=fib(n-1);
        if(arr[n-2]==0) arr[n-2]=fib(n-2);
        return arr[n-1]+arr[n-2];
        
    }
};