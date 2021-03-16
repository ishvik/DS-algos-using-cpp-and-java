import java.io.*;
import java.util.*;

public class HasPath {
   static class Edge {
      int src;
      int nbr;
      int wt;

      Edge(int src, int nbr, int wt){
         this.src = src;
         this.nbr = nbr;
         this.wt = wt;
      }
   }
   
   public static boolean findpath(ArrayList<Edge>[] graph,int sv,int dv,boolean []visited){
       if(sv == dv){
           return true;
       }
       visited[sv] = true;
       ArrayList<Edge> nbr = graph[sv];
       for(Edge tempnbr : nbr){
           if(visited[tempnbr.nbr] == false){
           boolean flag = findpath(graph,tempnbr.nbr,dv,visited);
           if(flag == true){
               return true;
           }
           }
       }
       return false;
   }
   
   public static void main(String[] args) throws Exception {
      BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

      int vtces = Integer.parseInt(br.readLine());
      ArrayList<Edge>[] graph = new ArrayList[vtces];
      for(int i = 0; i < vtces; i++){
         graph[i] = new ArrayList<>();
      }

      int edges = Integer.parseInt(br.readLine());
      for(int i = 0; i < edges; i++){
         String[] parts = br.readLine().split(" ");
         int v1 = Integer.parseInt(parts[0]);
         int v2 = Integer.parseInt(parts[1]);
         int wt = Integer.parseInt(parts[2]);
         graph[v1].add(new Edge(v1, v2, wt));
         graph[v2].add(new Edge(v2, v1, wt));
      }

      int src = Integer.parseInt(br.readLine());
      int dest = Integer.parseInt(br.readLine());

      // write your code here
      boolean []visited = new boolean[vtces];
      System.out.println(findpath(graph,src,dest,visited));
    }

}