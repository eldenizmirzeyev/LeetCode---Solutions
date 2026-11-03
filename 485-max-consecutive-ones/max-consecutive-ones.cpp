class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res = 0;
        int check = 0;
        for (int x = 0; x < nums.size(); ++x){
            if (nums[x] == 1){
                check++;
            }else{
                if (check > res){
                    res = check;
                }
                check = 0;
            }
        }
        res = max(res, check);
        return res;
    }
};