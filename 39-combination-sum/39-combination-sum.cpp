class Solution
{
    public:

        void solve(vector<int> &can, int target, vector<int> output,int index, vector< vector< int>> &ans) {
            int sum = accumulate(output.begin(), output.end(), 0);
           
            if(sum>target)
                return;
            if(sum==target)
            {
                ans.push_back(output);
                return; 
            }
            
            for(int i = index; i<can.size();++i)
            {
                output.push_back(can[i]);
                sum += can[i];
                solve(can,target,output,i,ans);
                output.pop_back();
                sum -= can[i];
            
            }        
            
    
        }
    vector<vector < int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector < int>> ans;
        vector<int> output;
        solve(candidates,target,output,0,ans);
        return ans;
    }
};