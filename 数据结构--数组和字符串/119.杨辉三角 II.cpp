class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> re;
        int i, te=rowIndex/2;
        long t;
        for(i=0, t=1; i<=te; t=t*(rowIndex-i)/(i+1), ++i)
            re.push_back(t);
        for(; i<=rowIndex; i++)
            re.push_back(re[rowIndex-i]);
        return re;
    }
};