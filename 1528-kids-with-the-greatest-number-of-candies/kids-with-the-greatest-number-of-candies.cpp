class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;
        res.reserve(candies.size());
        int maxCandies = 0;
        for (int x: candies){
            if (x > maxCandies){
                maxCandies = x;
            }
        }

        for (int i = 0; i < candies.size(); ++i){
            if ((candies[i] + extraCandies) >= maxCandies){
                res.push_back(true);
            }else{
                res.push_back(false);
            }
        }
        return res;
    }
};