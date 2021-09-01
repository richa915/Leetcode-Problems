class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int l=0;
        int r=nums.size()-1;
        int k=nums.size()-1;
        
        vector<int> sq(k+1);
        while(l<=r){
            int m;
            if(abs(nums[l]) > abs(nums[r])){
                m=nums[l];
                l++;
            }
            else{
                m=nums[r];
                r--;
            }
            sq[k--]=m*m;
        }
        
        return sq;
    }
};