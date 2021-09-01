class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> n1=nums;
        sort(nums.begin(), nums.end());
        int n=nums.size();
        vector<int> v;
                
        int l=0;
        int r=n-1;
        
        int a=0, b=0;
        while(l<r){
            if(nums[l]+nums[r] == target){
                a=nums[l];
                b=nums[r];
                break;
            }
            if(nums[l]+nums[r] > target){
                r--;
            }
            else if(nums[l]+nums[r] < target){
                l++;
            }
        }
        
        int flag=0;
        for(int i=0; i<n; i++){
            if(n1[i]==a){
                v.push_back(i);
                flag++;
            }
            else if(n1[i]==b){
                v.push_back(i);
                flag++;
            }
            if(flag==2)
                break;            
        }
        
        return v;
    }
};