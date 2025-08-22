class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        //optimal
        int l=0,h=arr.size()-1;
        while(h-l+1>k){
            if(abs(x-arr[l])>abs(arr[h]-x)) l++;
            else h--;
        }
        return vector<int>(arr.begin()+l,arr.begin()+h+1);
    }
};