class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int,int>m;
            int f=0,s=0;
            vector<int>ans;
            for(int i=0;i<nums.size();i++)
            {
                f=nums[i];
                s=target-f;
                if(m.find(s)!=m.end())
                {
                    ans.push_back(i);
                    ans.push_back(m[s]);
                    break;
                }
                m[f]=i;
            }
            return ans;
            
        }
    };