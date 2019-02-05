class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int re=0, ss=nums.size();
        for (int i=0; i<ss; i+=2)
            re+=nums[i];
        return re;
    }
};