class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     
       if(m==0){
           nums1=nums2;
           return;
       } 
        
       int i1 = m-1;
       int i2 = n-1;
       int end = nums1.size()-1; 
        //list-nums1 from the end contains greatest no. of all
       while(i1>=0 && i2>=0){
           if(nums2[i2]>=nums1[i1]){
               nums1[end] = nums2[i2];
               i2--;
           }
           else{
               nums1[end] = nums1[i1];
               i1--;
           }
           end--;
       } 
        //if all the smaller elements are remaining in nums2
       while(i2>=0){
           nums1[end] = nums2[i2];
           i2--;
           end--;
       } 
        
       return;
    }
};