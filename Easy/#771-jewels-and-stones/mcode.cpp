class Solution {
public:
    int numJewelsInStones(string J, string S) {
        char jStone[J.length() + 1], sStone[S.length() + 1] ; 
        strcpy(jStone, J.c_str()); 
        strcpy(sStone, S.c_str()); 

        int counter = 0, jLength = strlen(jStone), sLength = strlen(sStone);
        
         for (int i = 0; i < jLength; i++) {
             for (int j=0; j < sLength; j++) {
                if (sStone[j] == '\0') {
                    continue;
                } else if(jStone[i] == sStone[j]) {
                    counter++;
                    sStone[j] = '\0';
                 }
             }
         }
        return counter;
    }
};