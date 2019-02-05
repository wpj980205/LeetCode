class Solution {
public
    int pivotIndex(vector<int>& nums) {
        int a, b, s=nums.size();
        for(int i=0; i<s; i++){
            a=0;
            b=0;
            for(int j=0; j<i; j++)
                a+=nums[j];
            for(int j=i+1; j<s; j++)
                b+=nums[j];
            if(a==b)
                return i;
        }
        return -1;
    }
};