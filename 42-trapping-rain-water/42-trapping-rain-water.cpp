class Solution {
public:
    int trap(vector<int>& a) 
    {
        int n = a.size();
       int trap=0;
        int left[n];
        int right[n];
        
        left[0]=a[0];
        for(int i=1;i<n;++i)
            left[i]=max(a[i],left[i-1]);
        right[n-1]=a[n-1];
        for(int i=n-2;i>=0;--i)
            right[i]=max(a[i],right[i+1]);
        for(int i=0;i<n;++i)
            trap = trap + (min(left[i],right[i])-a[i]);
        return trap;
    }
};