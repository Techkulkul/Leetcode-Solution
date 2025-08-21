class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        //optimal
        priority_queue<int>maxheap;
        int totalStone=0;
        for(int i=0;i<piles.size();i++) maxheap.push(piles[i]);
        while(k>0){
            int topElement=maxheap.top();
            maxheap.pop();
            topElement=topElement-topElement/2;
            maxheap.push(topElement);
            k--;
        }
        while(!maxheap.empty()){
            totalStone+=maxheap.top();
            maxheap.pop();

        }
        return totalStone;
    }
};