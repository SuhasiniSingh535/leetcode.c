class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int i,k;
        int n=nums.size();
        if(nums.empty())
        {
            return 0;
        }
        k=0;
        for(i=1;i<n;i++)
        {
            if(nums[k]!=nums[i])
            {
                nums[k+1]=nums[i];
                k++;
            }
        }
        return k+1;
    }
};