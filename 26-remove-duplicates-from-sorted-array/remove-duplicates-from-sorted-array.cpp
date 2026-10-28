class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int eded = nums[0];
        int index = 1;
        for (int i = 1; i < nums.size(); ++i){
            if (nums[i] != eded){
                nums[index] = nums[i];
                eded = nums[i];
                index++;
            }
        }
        return index;
    }
};