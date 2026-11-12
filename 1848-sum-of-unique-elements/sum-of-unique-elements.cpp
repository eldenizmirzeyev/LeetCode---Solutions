class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int x:  nums){
            mp[x]++;
        }
        int res = 0;
        for (auto y: mp){
            if (y.second == 1){
                res += y.first;
            }
        }
        return res;
    }
};