class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        vector<int>::iterator a = nums.begin();
        vector<int>::iterator b = nums.end();
        reverse(a, b);
        reverse(a, a+k);
        reverse(a+k, b);
        return;
    }
};