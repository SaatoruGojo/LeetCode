class Solution {
public:
    int minMovesToSeat(vector<int>& se, vector<int>& st) {
        int sum=0;
        sort(se.begin(),se.end());
        sort(st.begin(),st.end());
        for(int i =0;i<se.size();++i)
        {
            sum += abs(se[i]-st[i]);
        }
        return sum;
            
        
    }
};