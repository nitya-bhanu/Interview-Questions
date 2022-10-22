class Solution {
public:
    void rotate(vector<int>& nums, int k) {
         k%=nums.size();
        int i=0,j=nums.size()-k-1;
       
        while(i<j)
        swap(nums[i++],nums[j--]);
        i=nums.size()-k;
        j=nums.size()-1;
        while(i>=0 && i<j)
        swap(nums[i++],nums[j--]);
        i=0;
        j=nums.size()-1;
        while(i<j)
        swap(nums[i++],nums[j--]);

    }
};
