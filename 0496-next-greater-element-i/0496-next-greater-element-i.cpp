class Solution 
{
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        int i,j,k;
        vector<int>output(nums1.size(),-1);
        for(i=0;i<nums1.size();i++)
        {
            for(j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                    //int index=j;
                    for(k=j+1;k<nums2.size();k++)
                    {
                        if(nums2[k]>nums2[j])
                        {
                            output[i]=nums2[k];
                            break;
                        }
                    }
                    // if(output[i].empty())
                    // {
                    //     output[i]=-1;
                    // }
                    break;
                }
            }
        }
        return output;
    }
};