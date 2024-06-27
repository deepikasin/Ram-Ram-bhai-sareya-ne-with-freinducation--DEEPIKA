class Solution {
public:
    int majorityElement(vector<int>& nums) {        
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];  
    }
};
//T.C=O(NlogN)
// S.C=O(1)