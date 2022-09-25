class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       
        int row = matrix.size();
        int rows = 0;
        int col = matrix[0].size();
        int cols = col -1;
        
        while(row>rows && cols > -1)
        {
            int curr = matrix[rows][cols];
            if(curr == target )
                return 1;
            else if(target>curr)
                rows++;
            else 
                cols--;
            
            
        }
        return 0;            
            
    }
};