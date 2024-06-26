class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int discarded=0;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==val){
                nums[i]=51;
                discarded++;
            }
        }
        sort(nums.begin(),nums.end());
        return nums.size() - discarded;
    }

//Time - O(NlongN)
//Space-O(1)
//the maximum val int the input is 50 therefore  assigning a greater value and then sorting it
};