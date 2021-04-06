import java.io.*;
import java.util.*;

public class ArrangeBuild{

public static void main(String[] args) throws Exception {
    // write your code here
    Scanner scn = new Scanner(System.in);
    int n = scn.nextInt();
    long empty = 1;
    long build = 1;
    for(int i=2;i<=n;i++){
        long t = build;
        build = build+empty;
        empty = t;
    }
    long ans = empty+build;
    System.out.println(ans*ans);
 }

}