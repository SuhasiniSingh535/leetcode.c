class Solution 
{
    public:
        int majorityElement(vector<int>& nums) 
        {
            int n = nums.size();
           
            int freq=1; 
            
            sort(nums.begin(),nums.end());
             if(n==1)
                return nums[0];
            for(int i=1;i<n;i++)
            {
                if(nums[i]==nums[i-1])
                {
                    freq++;
                }
                else
                {
                    freq=1;
                    
                }
                if(freq>n/2)
                {
                    return nums[i];
                }
            }
            return 0;
        }
};
