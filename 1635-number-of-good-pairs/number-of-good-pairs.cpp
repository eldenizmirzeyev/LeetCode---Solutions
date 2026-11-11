class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int len = nums.size();
        int start = 0;
        int curr = start + 1;
        int res = 0;
        while (start < len - 1){
            if (curr < len){
                if (nums[start] == nums[curr]){
                    res++;
                }
                curr++;
            }else{
                start++;
                curr = start + 1;
            }
        }
        return res;
    }
};