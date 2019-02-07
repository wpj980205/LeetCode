class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int ss = strs.size();
        if(ss==0)
            return "";
        string re=strs[0];
        for (auto i=1; i<ss; i++){
            while (strs[i].find(re)!=0){
                re = re.substr(0, re.length()-1);
            }
        }
        return re;
    }
    //水平扫描、分治、二分查找
};