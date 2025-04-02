class Solution {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
            unordered_map<int,int>m;
            for(int i=0;i<nums.size();i++)
            {
                m[nums[i]]++;
            }
            priority_queue<pair<int,int>>pq;
            for(auto &i:m)
            {
                pq.push({i.second,i.first});
            }
            vector<int>ans;
            while(k--)
            {
                int a=pq.top().second;
                pq.pop();
                ans.push_back(a);
            }
            return ans;
            
        }
    };