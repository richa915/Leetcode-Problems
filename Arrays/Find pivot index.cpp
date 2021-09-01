class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    
       long long int tsum = accumulate(nums.begin(), nums.end(), 0);
       long long int lsum=0, rsum=tsum;
       for(int i=0; i<nums.size(); i++){
           rsum-=nums[i];
           if(lsum==rsum) return i;
           lsum+=nums[i];
       } 
       return -1;
    }
};