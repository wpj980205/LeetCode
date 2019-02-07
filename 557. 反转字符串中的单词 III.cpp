class Solution {
public:
    string reverseWords(string s) {
        string::iterator i;
        vector<string::iterator> vi;
        s.insert(0, " ");
        for(i=s.begin(); i!=s.end(); i++){
            if(*i==' ')
                vi.push_back(i);
        }
        vi.push_back(i);
        int vs = vi.size()-1;
        for(int i=0; i<vs; i++)
            reverse(vi[i],vi[i+1]);
        s.erase(s.end()-1);
        return s;      
    }
};