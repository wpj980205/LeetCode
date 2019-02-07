class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>::iterator a=nums.begin(), b=nums.begin()+1, e=nums.end();
        if(e-a==1)
            return 1;
        while(b<e){
            while(*b==*a && b<e)
                b++;
            *(++a)=*b;
        }
        return (a-nums.begin());
    }
};