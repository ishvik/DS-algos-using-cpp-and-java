import java.io.*;
import java.util.*;

public class MinPathSum {

    public static void main(String[] args) throws Exception {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int m = scn.nextInt();
        int [][]grid = new int[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                grid[i][j] = scn.nextInt();
            }
        }
        
        System.out.println(minpathiter(grid));
    }
    //iterative solution
    public static int minpathiter(int [][]grid){
        int [][]dp = new int[grid.length][grid[0].length];
        dp[0][0] = grid[0][0];
        for(int j=1;j<dp[0].length;j++){
            dp[0][j] += dp[0][j-1]+grid[0][j];
        }
        
        for(int i=1;i<dp.length;i++){
            dp[i][0] += dp[i-1][0]+grid[i][0];
        }
        
        for(int i=1;i<dp.length;i++){
            for(int j=1;j<dp[0].length;j++){
                dp[i][j] = Math.min(dp[i-1][j],dp[i][j-1])+grid[i][j];
            }
        }
        return dp[grid.length-1][grid[0].length-1];
    }

    public static int minPathSum(int[][] grid) {
        int n = grid.length;
        int m = grid[0].length;
        int ans = minpath(grid,n-1,m-1,new int[n][m]);
        return ans;
    }
    //recursive solution
    public static int minpath(int [][]grid,int row,int col,int [][]dp){
        if(row<0 || col<0){
            return Integer.MAX_VALUE;
        }
        
        if(row == 0 && col == 0){
            return grid[0][0];
        }
        
        if(dp[row][col] != 0){
            return dp[row][col];
        }
        
        int left = minpath(grid,row,col-1,dp);
        int up = minpath(grid,row-1,col,dp);
        int ans = Math.min(up,left)+grid[row][col];
        dp[row][col] = ans;
        return ans;

}
}