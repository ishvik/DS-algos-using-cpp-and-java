import java.io.*;
import java.util.*;

public class GraphCyclic {
   static class Edge {
      int src;
      int nbr;
      int wt;

      Edge(int src, int nbr, int wt) {
         this.src = src;
         this.nbr = nbr;
         this.wt = wt;
      }
   }

   public static void main(String[] args) throws Exception {
      BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

      int vtces = Integer.parseInt(br.readLine());
      ArrayList<Edge>[] graph = new ArrayList[vtces];
      for (int i = 0; i < vtces; i++) {
         graph[i] = new ArrayList<>();
      }

      int edges = Integer.parseInt(br.readLine());
      for (int i = 0; i < edges; i++) {
         String[] parts = br.readLine().split(" ");
         int v1 = Integer.parseInt(parts[0]);
         int v2 = Integer.parseInt(parts[1]);
         int wt = Integer.parseInt(parts[2]);
         graph[v1].add(new Edge(v1, v2, wt));
         graph[v2].add(new Edge(v2, v1, wt));
      }

      // write your code here
      
      LinkedList<Integer> queue = new LinkedList<>();
      int []par = new int[vtces];
      Arrays.fill(par,-1);
      for(int i=0;i<vtces;i++){
         if(par[i] != -1){
             continue;
         }
        queue.addLast(i);
        par[i] = -3;
      
      while(queue.size() > 0){
          int rem = queue.removeLast();
          for(Edge temnbr : graph[rem]){
              if(par[temnbr.nbr] == -1){
                  queue.addLast(temnbr.nbr);
                  par[temnbr.nbr] = rem;
              }else{
                  if(temnbr.nbr != par[rem]){
                  System.out.println(true);
                  return;
                  }
              }
          }
      }
      System.out.println(false);
   }
}
}