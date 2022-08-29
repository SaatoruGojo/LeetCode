class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int ec) {
        vector<bool> res;
        for(auto x : c)
        {   int max=x+ec;
            int i=0;
            for(i=0;i<c.size();++i)
            {
                if(max<c[i])
                {
                    res.push_back(false);
                    
                    break;
                }
            }
         if(i==c.size())
             res.push_back(true);
        }
        return res;
    }
};