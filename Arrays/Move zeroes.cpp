class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        if(nums.size()==1) return;
        
        int ptr1=0, ptr2=1, n=nums.size();
        while(ptr2<n){
            
            if(nums[ptr1]==0){
                while(nums[ptr2]==0 && ptr2<n-1){
                    ptr2++;
                }
                swap(nums[ptr1], nums[ptr2]);
            }
            
            ptr1++;
            ptr2++;    
            
        }
        return;
    }
};