class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int idx = digits.size()-1;
        while (digits[idx]==9){
            digits[idx]=0;
            if (idx==0)
                digits.insert(digits.begin(),0);
            else
                --idx;
        }
        digits[idx]++;
        return digits;
    }
};