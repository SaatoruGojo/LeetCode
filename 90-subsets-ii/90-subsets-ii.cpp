class Solution
{

    private: void solve(vector<int> &nums, vector<int> output, int index, vector< vector< int>> &ans)
    {
        if (index >= nums.size())
        {

            for (int i = 0; i < ans.size(); ++i)
            {
                if (ans[i] == output)
                    return;
                vector<int> temp = ans[i];
                reverse(temp.begin(), temp.end());
                if (temp == output)
                    return;
            }
            ans.push_back(output);
            return;
        }

        solve(nums, output, index + 1, ans);

        output.push_back(nums[index]);
        solve(nums, output, index + 1, ans);
    }

    public:
        vector<vector < int>> subsetsWithDup(vector<int> &nums)
        {

            vector<vector < int>> ans;
            vector<int> output;
            int index = 0;
            sort(nums.begin(), nums.end());
            solve(nums, output, index, ans);
            return ans;
        }
};