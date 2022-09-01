class Solution
{
    public:
        int findMaxConsecutiveOnes(vector<int> &a)
        {
            int res = 0;
            int n=a.size();
            int count=0;
            for (int i = 0; i < n; ++i)
            {
                if (a[i] == 1)
                    ++count;
                else
                {
                    res = max(res, count);
                    count = 0;
                }
                
                    
            }
            if(count!=0)
            res = max(res, count);
            return res;
        }
};