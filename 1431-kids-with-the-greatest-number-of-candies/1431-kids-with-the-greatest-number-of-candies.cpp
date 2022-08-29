class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int ec) {
        vector<bool> res;
        int a = *max_element(c.begin(),c.end());
        for(int x : c)
        {
            if(x+ec >= a)
                res.push_back(true);
            else
                res.push_back(false);
        }
       
        return res;
    }
};