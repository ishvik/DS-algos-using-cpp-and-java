import java.io.*;
import java.util.*;

public class ClimbStairs {

    public static void main(String[] args) throws Exception {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int []dp = new int[n+1];
        System.out.println(climbiter(n,dp));
    }
    //recursive solution
    public static int climb(int n,int []dp){
        if(n == 0){
            return 1;
        }
        if(n<0){
            return 0;
        }
        if(dp[n] != 0){
            return dp[n];
        }
        
        int p1 = climb(n-1,dp);
        int p2 = climb(n-2,dp);
        int p3 = climb(n-3,dp);
        int ans = p1+p2+p3;
        dp[n] = ans;
        
        return ans;
    }
    //iterative solution
    public static int climbiter(int n,int []dp){
        dp[0] = 1;
        for(int i=1;i<=n;i++){
            if(i-1>=0){
                dp[i] = dp[i]+dp[i-1];
            }
            if(i-2>=0){
                dp[i] = dp[i]+dp[i-2];
            }
            if(i-3>=0){
                dp[i] = dp[i]+dp[i-3];
            }
        }
        
        return dp[n];
    }

}