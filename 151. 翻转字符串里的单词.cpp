class Solution {
public:
    void reverseWords(string &s) {
        s+=" ";
        for(int i=s.find("  "); i!=std::string::npos; i=s.find("  "))
            s.erase(s.begin()+i);
        vector<string> vs;
        for(int i=s.find(" "); i!=std::string::npos; i=s.find(" ")){
            vs.push_back(s.substr(0,i));
            string::iterator si = s.begin();
            s.erase(si, si+i+1);
        }
        for(vector<string>::iterator i = vs.end()-1; i!=vs.begin()-1; i--){
            s+=*i;
            s+=" ";
        }
        while(*(s.end()-1)==' ')
            s.erase(s.end()-1);
    }
};