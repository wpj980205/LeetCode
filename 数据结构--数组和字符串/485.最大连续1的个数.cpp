class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0, j, r=0, s=nums.size();
        while(i<s){
            for(j=0; nums[i+j]==1; j++);
            r=(j>r)?(j):r;
            i+=j+1;
        }
        return r;
};