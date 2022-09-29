class Solution {
public:
    int minimumSum(int num) {
        int a[4];
      
        for(int i=0;i<4;++i,num /= 10)
        {
            a[i]=num%10;
          
        }
        sort(a,a+4);
        return 10*(a[0] +a[1]) + a[2]+a[3];
        
        
        
    }
};