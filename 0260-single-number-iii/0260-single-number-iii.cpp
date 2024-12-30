class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long XOR=0;
        for(int i=0;i<nums.size();i++)
            XOR^=nums[i];
        XOR=((XOR & XOR-1)^XOR);
        int XOR1=0,XOR2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]& XOR) XOR1^=nums[i];
            else XOR2^=nums[i];
        }
        vector<int>ans;
        ans.push_back(XOR1);
        ans.push_back(XOR2);
        return ans;

        
    }
};