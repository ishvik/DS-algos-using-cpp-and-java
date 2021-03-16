import java.io.*;
import java.util.*;

public class NoOfIsland {
    
   public static void main(String[] args) throws Exception {
      BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

      int m = Integer.parseInt(br.readLine());
      int n = Integer.parseInt(br.readLine());
      int[][] arr = new int[m][n];

      for (int i = 0; i < arr.length; i++) {
         String parts = br.readLine();
         for (int j = 0; j < arr[0].length; j++) {
            arr[i][j] = Integer.parseInt(parts.split(" ")[j]);
         }
      }

      // write your code here
      int c = 0;
      for(int i=0;i<arr.length;i++){
          for(int j=0;j<arr[0].length;j++){
              if(arr[i][j] == 0){
              traversal(arr,i,j);
              c++;
              }
          }
      }
      
      System.out.println(c);
   }      
      public static void traversal(int [][]arr,int i,int j){
          arr[i][j] = 1;
          
          if(i-1>=0 && arr[i-1][j] == 0)
          traversal(arr,i-1,j);
          
          if(j+1<arr[0].length && arr[i][j+1] == 0)
          traversal(arr,i,j+1);
          
          if(i+1<arr.length && arr[i+1][j] == 0)
          traversal(arr,i+1,j);
          
          if(j-1>=0 && arr[i][j-1] == 0)
          traversal(arr,i,j-1);
      }


}