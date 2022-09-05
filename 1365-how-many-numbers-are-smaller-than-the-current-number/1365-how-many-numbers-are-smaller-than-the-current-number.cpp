class Solution
{
    public:
        vector<int> smallerNumbersThanCurrent(vector<int> &a)
        {
            int n = a.size();
            int count = 0;
            vector<int> b;

            for (int i = 0; i < n; ++i)
            {
                int j = 0;

                for (int j = 0; j < n; ++j)
                {
                    if (a[j] == a[i])
                        continue;
                    else if (a[j] < a[i])
                        ++count;
                }
                b.push_back(count);
                count = 0;
            }
            return b;
        }
};