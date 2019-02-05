class Solution {
public:
    int strStr(string a, string b) {
        int lb = b.length();
        if (lb==0)
            return 0;
        int la = a.length();
        if (lb>la)
            return -1;
        bool flag;
        for(int i=0; i<la-lb+1; i++){
            flag = true;
            for (int j=0; j<lb; j++){
                if (a[i+j]!=b[j]){
                    flag = false;
                    break;
                }
            }
            if(flag)
                return i;
        }
        return -1;
    }
    //KMP, BM, Sunday
};