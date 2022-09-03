class Solution {
public:
    bool isPalindrome(string s) {
      transform(s.begin(),s.end(),s.begin(), ::tolower);
        int n=s.size();
        string str="";
          for(int i=0;i<n;++i)
          {
              if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9'))
              {
                  str +=s[i];
              }
          }
        string s2=str;
        reverse(s2.begin(),s2.end());
        if(s2==str)
            return true;
        else 
            return false;
    }
};