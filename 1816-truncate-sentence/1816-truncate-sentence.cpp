class Solution {
public:
    string truncateSentence(string s, int k) 
    {
        
        string s1 = "";
        int count =0;
        int i;
        for( i =0;i<s.length();i++)
        {
            
            if(s[i] == ' ')
            {
                ++count;
            }
            if(count == k)
            {
                break;
            }
            
            s1 += s[i];
            
        }
        
     
        return s1;
        
        
        
    }
};