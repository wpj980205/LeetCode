class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        if(nums.size()==1)
            return 0;
        vector<int>::iterator it1 = max_element(nums.begin(),nums.end());
        int max = *it1;
        nums.erase(it1);
        vector<int>::iterator it2 = max_element(nums.begin(),nums.end());
        if(max>=2**it2)
            return it1-nums.begin();
        return -1;
    }
};