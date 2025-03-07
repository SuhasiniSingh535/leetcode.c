class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int i,j;
        
        for(i=0;i<nums.size();i++)
        {
            int count=0;
            int ele=nums[i];
            for(j=0;j<nums.size();j++)
            {
                if(nums[j]==nums[i])
                {
                    count++;
                }
                
            }
            if(count==1)
            {
                return ele;
            }
            
        }
        return -1;
    }
};