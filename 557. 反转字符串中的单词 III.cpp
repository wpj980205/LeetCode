class Solution {
public:
    string reverseWords(string s) {
        s+=' ';
        string::iterator a=s.begin(), b=s.begin()+1, e=s.end()-1;
        while(b<=e){
            while(*b!=' ')
                b++;
            reverse(a, b);
            b++;
            a=b;
        }
        s.erase(e);
        return s;
    }
};