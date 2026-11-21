class Solution {
public:
    string truncateSentence(string s, int k) {
        string res;
        for (char c : s){
            if (k == 0){
                break;
            }else if (c == ' '){
                k--;
            }
            res += c;
        }
        if (k == 0){
            res.pop_back();
        }
        return res;
    }
};