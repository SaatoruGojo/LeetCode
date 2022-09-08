class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        string b;
        string c;
        
        for(int i=0;i<word1.size();++i)
        {
            b = b + word1[i];
        }
        
        for(int i=0;i<word2.size();++i)
        {
            c = c + word2[i];
        }
        
        if(b == c)
            return true;
        else 
            return false;
        
        
        
    }
};