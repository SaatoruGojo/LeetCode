class Solution
{
    public:
        int findMaxConsecutiveOnes(vector<int> &nums)
        {
            int res = 0, count = 0, N = nums.size();
            for (int i = 0; i < N; i++)
            {
                if (nums[i] == 0)
                {
                    if (count > res)
                        res = count;

                    count = 0;
                }
                else
                    count++;
            }
            if (count > res)
                res = count;

            return res;
        }
};