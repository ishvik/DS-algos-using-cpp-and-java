import java.io.*;
import java.util.*;

public class PaintHouse1 {

    public static void main(String[] args) throws Exception {
    
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int [][]arr = new int[n][3];
        for(int i=0;i<n;i++){
            for(int j=0;j<3;j++){
                arr[i][j] = scn.nextInt();
            }
        }
        System.out.println(minCost(arr));
    }
    
    public static int minCost(int[][] costs) {
        // write your code here
        int n = costs.length;
        int [][]dp = new int[n][3];
        for(int i=0;i<n;i++){
            Arrays.fill(dp[i],Integer.MAX_VALUE);
        }

        dp[n-1][0] = costs[n-1][0];
        dp[n-1][1] = costs[n-1][1];
        dp[n-1][2] = costs[n-1][2];

        for(int i=n-2;i>=0;i--){
            for(int j=0;j<3;j++){
                if(j == 0){
                    dp[i][j] = Math.min(dp[i+1][1],dp[i+1][2]);
                }else if(j == 1){
                    dp[i][j] = Math.min(dp[i+1][0],dp[i+1][2]);
                }else{
                    dp[i][j] = Math.min(dp[i+1][0],dp[i+1][1]);
                }
                dp[i][j] += costs[i][j];
            }
        }
        int ans = Math.min(dp[0][0],dp[0][1]);
        ans = Math.min(ans,dp[0][2]);
        return ans;
    }
}