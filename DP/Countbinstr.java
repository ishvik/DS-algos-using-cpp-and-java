import java.io.*;
import java.util.*;

public class Countbinstr{

public static void main(String[] args) throws Exception {
    // write your code here
    Scanner scn = new Scanner(System.in);
    int n = scn.nextInt();
    int zero = 1;
    int one = 1;
    for(int i=2;i<=n;i++){
        int t = one;
        one = one+zero;
        zero = t;
    }
    
    System.out.println(one+zero);
 }

}