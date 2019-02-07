class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        if (matrix.size()==0)
            return {};
        int m=matrix.size()-1;
        int n=matrix[0].size()-1;
        vector<int> re;
        int a, b;
        for (int k=0; k<=m+n; k++){
            a = (0>k-n)?0:(k-n);
            b = (k>m)?m:k;
            if (k%2!=0){
                for (int i=a; i<=b; i++)
                    re.push_back(matrix[i][k-i]);
            }
            else{
                for (int i=b; i>=a; i--)
                    re.push_back(matrix[i][k-i]);
            }
        }
        return re;
    }
};