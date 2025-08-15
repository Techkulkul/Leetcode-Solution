class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        //optimal
        int sum=0;
        for(int i=0;i<k;i++) sum+=cardPoints[i];
        int maxScore=sum;
        int j=cardPoints.size()-1;
        for(int i=k-1;i>=0;i--){
            sum-=cardPoints[i];
            sum+=cardPoints[j];
            j--;
            maxScore=max(maxScore,sum);
        }
        return maxScore;
    }
};