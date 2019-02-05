class Solution {
public
    int pivotIndex(vector<int>& nums) {
        int s1=0, s2=0, s=nums.size();
        if(s==0)
            return -1;
        for(int i=1; i<s; ++i){
            s2+=nums[i];
        }
        if(s2==0)
            return 0;
        for(int i=1; i<s; ++i){
            s1+=nums[i-1];
            s2-=nums[i];
            if(s1==s2)
                return i;
        }
        return -1;
    }
};