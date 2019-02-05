class Solution {
public
    int dominantIndex(vector<int>& nums) {
        int maxidx=0;
        for (int i=1; i<nums.size(); ++i){
            if(nums[i]>nums[maxidx])
                maxidx=i;
        }
        bool flag = true;
        for (int i=0; i<nums.size(); ++i){
            if(nums[i]*2>nums[maxidx] && i!=maxidx)
                flag = false;
        }
        if(flag)
            return maxidx;
        else
            return -1;
    }
};