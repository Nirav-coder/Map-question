class Solution {
    public:
        int firstUniqChar(string s) {
            vector<int>c(26,0);
            for(int t:s)
            {
                c[t-'a']++;
            }
            for(int i=0;i<s.size();i++)
            {
                if(c[s[i]-'a']==1)
                {
                    return i;
                }
            }
    
            return -1;
            
        }
    };