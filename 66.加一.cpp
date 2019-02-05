class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        ++digits.back();
        for(int i=digits.size()-1;i>0;i--){
            if(digits[i]==10){
                digits[i-1]++;
                digits[i]=0;
            }
        }
        if(digits[0]<10)
            return digits;
        else{
            digits[0]=0;
            digits.push_back(0);
            for (int i=digits.size()-1;i>=0;i--)
                digits[i+1]=digits[i];
            digits[0]=1;
            return digits;
        }
    }
};