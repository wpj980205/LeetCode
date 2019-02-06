class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        for(; k>0; k--){
            nums.insert(nums.begin(),nums.back());
            nums.erase(nums.end()-1);
        }
    }
};