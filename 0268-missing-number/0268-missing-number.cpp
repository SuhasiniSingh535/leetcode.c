class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int sum;
        int n=nums.size();
        int sum2=0;
        
        if(nums.empty())
        {
            return 0;
        }
        
        for(int i=0;i<n;i++)
        {
            
            sum2=sum2+nums[i];
        }
        
        sum=(n*(n+1))/2;
        return sum-sum2;
    }
};