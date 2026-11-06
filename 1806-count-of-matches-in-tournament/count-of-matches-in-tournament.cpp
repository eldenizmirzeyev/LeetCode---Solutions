class Solution {
public:
    int numberOfMatches(int n) {
        int res = 0;
        while (n != 1){
            if (n % 2 == 0){
                n /= 2;
                res += n;
            }else{
                res += n / 2;
                n = n / 2 + 1;
            }
        }
        return res;
    }
};