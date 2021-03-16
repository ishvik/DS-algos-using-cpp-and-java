import java.io.*;
import java.util.*;

public class HamiltonianPathCycle {
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
      int src = Integer.parseInt(br.readLine());
      boolean []vis = new boolean[vtces];
        allpath(graph,src,vis,0,src+"",src);
   }
      // write all your codes here
      public static void allpath(ArrayList<Edge>[] graph,int src, boolean []vis,int vc,String psf,int actsrc){
          
          if(vc == graph.length-1){
              System.out.print(psf);
              boolean flag = false;
              for(Edge temp:graph[src]){
                  if(temp.nbr == actsrc){
                      flag = true;
                      break;
                  }
              }
              if(flag == true){
                  System.out.println("*");
              }else{
                  System.out.println(".");
              }
              return;
          }
          
          vis[src] = true;
          vc++;
          
          for(Edge temnbr : graph[src]){
              if(vis[temnbr.nbr] == false){
                  allpath(graph,temnbr.nbr,vis,vc,psf+temnbr.nbr,actsrc);
              }
          }
          vis[src] = false;
          vc--;
      }


}