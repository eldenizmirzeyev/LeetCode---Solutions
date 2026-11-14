class Solution {
public:
    bool squareIsWhite(string coordinates) {
        string ch = "abcdefgh";
        string dg = "12345678";
        int chI = 0;
        int dgI = 0;
        for (int i = 0; i < 8; ++i){
            if (coordinates[0] == ch[i]){
                chI = i;
            }
            if (coordinates[1] == dg[i]){
                dgI = i;
            }
        }
        return ((dgI + chI) % 2 == 1);
        
    }
};