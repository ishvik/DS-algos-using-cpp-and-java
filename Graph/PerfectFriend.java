import java.io.*;
import java.util.*;

public class PerfectFriend {
   static class Edge {
      int src;
      int nbr;
      
      Edge(int src, int nbr) {
         this.src = src;
         this.nbr = nbr;
      }
   }

    public static void traversal(ArrayList<Edge>[] graph,int src,boolean []vis, ArrayList<Integer> temp){
        vis[src] = true;
        temp.add(src);
        
        for(Edge temnbr:graph[src]){
            if(vis[temnbr.nbr] == false){
                traversal(graph,temnbr.nbr,vis,temp);
            }
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
         graph[v1].add(new Edge(v1, v2));
         graph[v2].add(new Edge(v2, v1));
      }

      ArrayList<ArrayList<Integer>> comps = new ArrayList<>();
      
      // write your code here
      boolean []vis = new boolean[vtces];
      for(int v=0;v<vtces;v++){
          if(vis[v] == false){
            ArrayList<Integer> temp = new ArrayList<>();
            traversal(graph,v,vis,temp);
            comps.add(temp);
          }
      }

      int res = 0;
      for(int i=0;i<comps.size();i++){
          for(int j=i+1;j<comps.size();j++){
              int count = comps.get(i).size() * comps.get(j).size();
              res += count;
          }
      }
      
      System.out.println(res);
   }
}