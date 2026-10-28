class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int result = 0;
        for (int i = 0; i < accounts.size(); ++i){
            int sum = 0;
            for (auto elements : accounts[i]){
                sum += elements;
            }
            if (sum > result){
                result = sum;
            }
        }
        return result;
    }
};