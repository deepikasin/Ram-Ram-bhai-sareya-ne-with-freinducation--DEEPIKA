class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=1;
        int j=nums.size()-1;
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i]==nums[i-1]){
                count++;
                if(count>2) {
                    swap(nums[i],nums[j]);
                    j--;
                }
            }
            else{
                count=1;
            }
            
        }
        sort(nums.begin(),nums.begin()+j+1);
        return j+1;
    }
};
//TC=O(NlogN)
//SC=O(1)