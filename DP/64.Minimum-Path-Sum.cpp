class Solution {
public:
    int fn(vector <vector<int>>& grid,vector <vector<int>>& dp,int x,int y){
      //  cout<<x<<' '<<y<<' '<<grid[x][y]<<endl;
        if(x==0 && y==0)
            return 0;
        else if(dp[x][y]!=-1)
            return dp[x][y];
        else if(x==0)
            return dp[x][y] = fn(grid,dp,x,y-1)+grid[x][y-1];
        else if(y==0)
            return dp[x][y] = fn(grid,dp,x-1,y)+grid[x-1][y];
        else return dp[x][y] = min(fn(grid,dp,x-1,y)+grid[x-1][y],fn(grid,dp,x,y-1)+grid[x][y-1]);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector <vector<int>> dp (m,vector<int>(n,-1));
        return fn(grid,dp,m-1,n-1)+grid[m-1][n-1];
    }
    
};