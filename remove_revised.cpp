class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int discarded=0;
        int j=nums.size()-1;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==val){
                swap(nums[i],nums[j]);
                j--;
                discarded++;
            }
        }
        return j+1;
    }

//Time - O(N)
//Space-O(1)
//the not required val with last value in the array
};