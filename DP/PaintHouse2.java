import java.io.*;
import java.util.*;

public class PaintHouse2 {

    public static void main(String[] args) throws Exception {
    Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int k = scn.nextInt();
        int [][]arr = new int[n][k];
        for(int i=0;i<n;i++){
            for(int j=0;j<k;j++){
                arr[i][j] = scn.nextInt();
            }
        }
        System.out.println(Painthouse(arr));
    }
    
    public static int Painthouse(int [][]costs){
        int n = costs.length;
        if(n == 0){
            return 0;
        }
        int m = costs[0].length;
        int [][]dp = new int[n][m];
        for(int i=0;i<n;i++){
            Arrays.fill(dp[i],Integer.MAX_VALUE);
        }
        
        for(int j=0;j<m;j++){
            dp[n-1][j] = costs[n-1][j];
        }
        
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<m;j++){
                for(int k =0;k<m;k++){
                    if(k!=j){
                        dp[i][j] = Math.min(dp[i][j],dp[i+1][k]);
                    }
                }
                dp[i][j] += costs[i][j];
            }
        }
        
        int ans = Integer.MAX_VALUE;
        for(int i=0;i<m;i++){
            ans = Math.min(ans,dp[0][i]);
        }
        
        return ans;
    }
}