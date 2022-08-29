class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int n = s.size();
        int min =0;
        for(int i=0;i<n;++i)
        {
            int count=0;
            int m = s[i].size();
            for(int j=0;j<m;++j)
                if(s[i][j]==' ')
                {
                    count++;  
                }
            min = max(min,count+1);
        }
        return min;
    }
};