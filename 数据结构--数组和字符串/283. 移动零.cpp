class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>::iterator a=nums.begin(), e=nums.end()-1;
        while(a<=e){
            if(*a==0){
                nums.erase(a);
                nums.push_back(0);
                e--;
            }
            else
                a++;
        }
    }
};