class Solution {
    
private: 
     void solve(vector<int> &s, int index, vector<vector<int>>&ans)
     {
         if(index>=s.size())
         {
             ans.push_back(s);
            return;
     
         }
         
            for(int i=index;i<s.size();++i)
            {
                swap(s[index],s[i]);
                solve(s,index+1,ans);
                swap(s[index],s[i]);
            }
             
        }
public:
    vector<vector<int>> permute(vector<int>& nums) {
         vector<vector<int>> ans;
        int index=0;
        solve(nums,index,ans);
        return ans;
    }
};