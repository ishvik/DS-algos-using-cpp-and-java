import java.io.*;
import java.util.*;

public class Fibonacci{

public static void main(String[] args) throws Exception {
    // write your code here
    Scanner scn = new Scanner(System.in);
    int n = scn.nextInt();
    int []dp = new int[n+1];
    System.out.println(fs(n,dp));
 }
 
 public static int fs(int n,int []dp){
     
     if(n == 0 || n == 1){
         return n;
     }
     
     if(dp[n] != 0){
         return dp[n];
     }
     
     int f1 = fs(n-1,dp);
     int f2 = fs(n-2,dp);
     dp[n] = f1+f2;
     return f1+f2;
 }

}