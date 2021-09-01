class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        int lsum=0, rsum=0, n=cardPoints.size()-1;
        for(int i=0; i<k; i++){
            lsum+=cardPoints[i];
        }
        int maxm=lsum;
        for(int i=0; i<k; i++){
            rsum+=cardPoints[n-i];
            lsum-=cardPoints[k-i-1];
            
            maxm=max(rsum+lsum, maxm);
        }
        return maxm;
    }
};