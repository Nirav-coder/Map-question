class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
           unordered_map<int,int>m;
           int ans=0;
           for(int i=0;i<nums.size();i++)
           {
            int s=0;
            if(m.find(nums[i])==m.end())
            {
             int l=m.count(nums[i]-1)?m[nums[i]-1]:0;
            int r=m.count(nums[i]+1)?m[nums[i]+1]:0;
             s=l+r+1;
            m[nums[i]]=s;
            m[nums[i]-l]=s;
            m[nums[i]+r]=s;
    
            }
            ans=max(ans,s);
            
           }
           return ans;
            
        }
    };