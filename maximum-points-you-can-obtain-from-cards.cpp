class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k){
        int maxi = INT_MIN;
        int leftSum = 0;
        int rightSum =0;
        for(int i=0;i<k;i++){
            leftSum+=cardPoints[i];
        }
        maxi = leftSum;
        int rightIndex = cardPoints.size()-1;
        for(int i=k-1;i>=0;i--){
            leftSum-=cardPoints[i];
            rightSum+=cardPoints[rightIndex];
            rightIndex--;
            maxi=max(maxi,(leftSum+rightSum));
        }
        return maxi;
    }


};
