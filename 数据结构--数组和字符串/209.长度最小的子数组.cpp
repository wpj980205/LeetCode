class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int ns=nums.size(), sum=0;
        if(ns==0)
            return 0;
        for(int i=0; i<nums.size(); i++)
            sum+=nums[i];
        if(sum<s)
            return 0;
        int a=0, b=0, r=ns;
        sum=nums[0];
        while(b<ns){
            if (sum<s){
                sum+=nums[++b];
            }
            else if(sum>=s){
                int t=b-a+1;
                r=(t>r)?r:t;
                sum-=nums[a++];
            }
        }
        return r;
    }
};