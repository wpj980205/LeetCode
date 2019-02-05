class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int idx1, idx2, s=numbers.size();
        for (idx2=1; idx2<s; idx2++){
            for (idx1=0; idx1<idx2; idx1++){
                if (numbers[idx1]+numbers[idx2]==target){
                    return {idx1+1, idx2+1};
                }
            }
        }
        return {-1, -1};
    }
};