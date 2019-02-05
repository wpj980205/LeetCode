#### array ####
Initialize
get Length
access Element
Iterate all Elements
Modify Elements
Sort

#### vector ####
Initialize
make a Copy
cast an Array to a Vector
get Length
access Element
Iterate the Vector
Modify Element
Sort
Add new Element at the End of the Vector
Delete the last Element

##### vector用法 #####
```
vector<int> v;
// 大小
v.size();
v.resize(5);
// 迭代器
vector<int>::iterator it = max_element(v.begin(), v.end());
int max = *it;
// 插入
v.insert(it, 0);
v.push_back(1);
// 删除
v.erase(it);
```

#### two dimensional array ####
printArray

#### string ####
Initialize
make a Copy
比较函数
'=='
'compare'
是否可变
额外操作
Concatenate
Find    rfind
Substring

#### 双指针技巧 ####
从两端向中间迭代数组。  一个指针从始端开始，而另一个指针从末端开始。
两个不同步的指针。    同时有一个慢指针和一个快指针。    确定两个指针的移动策略。

[移除元素](https://leetcode-cn.com/explore/learn/card/array-and-string/201/two-pointer-technique/787/)
```cpp
//v1
int removeElement(vector<int>& nums, int val) {
    int k = 0;
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            ++k;
        }
    }
    return k;
}
```

[最大连续1的个数](https://leetcode-cn.com/submissions/detail/12441153/)
```cpp
//v1
int findMaxConsecutiveOnes(vector<int>& nums) {
    int i=0, j, r=0, s=nums.size();
    while(i<s){
        for(j=0; nums[i+j]==1; j++);
        r=(j>r)?(j):r;
        i+=j+1;
    }
    return r;
```

[长度最小的子数组](https://leetcode-cn.com/explore/learn/card/array-and-string/201/two-pointer-technique/789/)
```cpp
//v1
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
```
