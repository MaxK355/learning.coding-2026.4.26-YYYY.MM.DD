#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int len  = nums.size();
        int l=0,r=len-1;
        int numsbackup[len];
        for(int i=0;i<len;i++)
        {
            numsbackup[i]=nums[i];
        }
        sort(nums.begin(),nums.end());
        while(l<r)
        {
            int val;
            val=nums[l]+nums[r];
            if(val>target)
            {
                r--;
            }
            else if(val<target)
            {
                l++;
            }
            if(val== target)
            {
                int a;
                for(int i=0;i<len;i++)
                {
                    if(numsbackup[i]==nums[l])
                    {
                        ans.push_back(i);
                        a=i;
                        break;
                    }
                }
                for(int i=0;i<len;i++)
                {
                    if(numsbackup[i]==nums[r]&&i!=a)
                    {
                        ans.push_back(i);
                        break;
                    }
                }
                return ans;
            }
        }
        return ans;
    }
};