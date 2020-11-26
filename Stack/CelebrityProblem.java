import java.io.*;
import java.util.*;

public class CelebrityProblem {

    public static void main(String[] args) throws Exception {
        // write your code here
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int[][] arr = new int[n][n];

        for (int j = 0; j < n; j++) {
            String line = br.readLine();
            for (int k = 0; k < n; k++) {
                arr[j][k] = line.charAt(k) - '0';
            }
        }

        findCelebrity(arr);

    }

    public static void findCelebrity(int[][] arr) {
        Stack<Integer> celeb = new Stack<>();
        for(int i=0; i<arr.length; i++){
            celeb.push(i);
        }
        
        while(celeb.size() >= 2){
            int i = celeb.pop();
            int j = celeb.pop();
            if(arr[i][j] == 1){
                celeb.push(j);
            }else{
                celeb.push(i);
            }
        }
        int c = celeb.pop();
        for(int i=0;i<arr.length;i++){
            if(i != c){
                if(arr[i][c] == 0 || arr[c][i] == 1){
                    System.out.println("none");
                    return;
                }
            }
        }
        
        System.out.println(c);
    }

}