class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int>::iterator it = max_element(nums.begin(),nums.end());
        int max = *it;
        nums.erase(it);
        int idx = it - nums.begin();
        it = max_element(nums.begin(),nums.end());
        if (max>=2**it)
            return idx;
        return -1;
    }
};