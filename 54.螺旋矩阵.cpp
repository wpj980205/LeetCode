class Solution {
public:
    void c(vector<int>& re, vector<vector<int>>& matrix, int t, int m, int n){
        int temp = (t-t%4)/4;
        switch(t%4){
            case 0:
                for (auto item = matrix[temp].begin()+temp; item != matrix[temp].end()-temp; ++item)
                    re.push_back(*item);
                break;
            case 1:
                for (int i=temp+1; i<=m-temp; ++i)
                    re.push_back(matrix[i][n-temp]);
                break;
            case 2:
                for (auto item = matrix[m-temp].end()-temp-2; item != matrix[m-temp].begin()+temp-1; --item)
                    re.push_back(*item);
                break;
            case 3:
                for (int i=m-temp-1; i>=temp+1; --i)
                    re.push_back(matrix[i][temp]);
                break;
        }
    }

    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> re;
        if (matrix.size()==0)
            return re;
        int t = 0;
        int m = matrix.size()-1;
        int n = matrix[0].size()-1;
        while (re.size()<(m+1)*(n+1)){
            c(re, matrix, t, m, n);
            t++;
        }
        return re;
    }
};