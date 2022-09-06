class Solution {
public:
    vector<int> decompressRLElist(vector<int>& a) {
        vector<int> b;
        for(int i=0;i<a.size();i+=2)
        {
            int x = a[i];
            while(x>0)
            {
                b.push_back(a[i+1]);
                x--;
            }
        }
        return b;
    }
};