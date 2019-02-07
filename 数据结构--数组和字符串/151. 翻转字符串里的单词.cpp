class Solution {
public:
    void reverseWords(string &s) {
        s+=" ";    //为方便处理，加入尾部空格
        for(int i=s.find("  "); i!=std::string::npos; i=s.find("  "))
            s.erase(s.begin()+i);    //消除多余空格
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
            s.erase(s.end()-1);    //消除尾部空格
    }
};