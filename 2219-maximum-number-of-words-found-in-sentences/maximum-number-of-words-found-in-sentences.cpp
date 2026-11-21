class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int res = 0;
        for (string x : sentences){
            int space = count(x.begin(), x.end(), ' ');
            if (space > res){
                res = space;
            }
        }
        res++;
        return res;
    }
};