class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       int indexPos=0;
        int indexNeg=1;
        int n = nums.size();
        vector<int> ans(n,0);
        for(int x : nums)
        {
            if(x>0)
            {
                ans[indexPos]=x;
                indexPos += 2;
            }
            else
            {
                ans[indexNeg]=x;
                indexNeg += 2;
            }
        }
        return ans;
    }
};