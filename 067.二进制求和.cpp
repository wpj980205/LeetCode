class Solution {
public:
    string addBinary(string sa, string sb) {
        string r;
        int a, b, c, t;
        c=0;
        for(int i=sa.length()-1, j=sb.length()-1; i>=0||j>=0; i--, j--){
            a=(i>=0)?sa[i]-'0':0;
            b=(j>=0)?sb[j]-'0':0;
            t=a+b+c;
            if(t>=2){
                c=1;
                t-=2;
            }
            else
                c=0;
            r.insert(r.begin(),t+'0');
        }
        if (c==1)
            r.insert(r.begin(),'1');
        return r;
    }
};