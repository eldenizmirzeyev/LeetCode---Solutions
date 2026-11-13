class Solution {
public:
    int countDigits(int num) {
        int res = 0;
        int copy = num;
        while (copy > 0){
            if (num % (copy % 10) == 0){
                res++;
            }
            copy /= 10;
        }
        return res;
    }
};