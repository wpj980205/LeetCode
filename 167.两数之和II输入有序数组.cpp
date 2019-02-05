class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int idx1=0, idx2=numbers.size()-1 ,sum;
        while (idx1<idx2){
            sum=numbers[idx1]+numbers[idx2];
            if(sum<target)
                idx1++;
            else if(sum>target)
                idx2--;
            else
                return {idx1+1, idx2+1};
        }
        return {-1, -1};
    }
};