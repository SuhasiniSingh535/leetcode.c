class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int i,j=0;
        int n=nums.size();
        vector<int> temps(n,0);
        for(i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                temps[j++]=nums[i];
            }
        }
        for(i=0;i<n;i++)
        {
            nums[i]=temps[i];
        }
       
    }
};
    
