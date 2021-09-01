class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> ans;
        
        int psum = 0;
        for(int i=0; i<n; i++){
            psum+=nums[i];
            ans.push_back(psum);
        }
        
        return ans;
    }
};