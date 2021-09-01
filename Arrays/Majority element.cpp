class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int cnt = 1, n = nums[0];
        
        for(int i=1; i<nums.size(); i++){
           if(cnt==0){
               cnt++;
               n=nums[i];
           }
           else if(n==nums[i])
               cnt++;
           else
               cnt--;
        }
        return n;
    }
};