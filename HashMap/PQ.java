import java.io.*;
import java.util.*;

public class PQ {

  public static class PriorityQueue {
    ArrayList<Integer> data;

    public PriorityQueue() {
      data = new ArrayList<>();
    }

    public void add(int val) {
      // write your code here
      data.add(val);
      upheapify(data.size()-1);
    }
    
    public void upheapify(int idx){
        if(idx == 0){
            return;
        }
        
        int pidx = (idx-1)/2;
        if(data.get(idx)<data.get(pidx)){
            int ie = data.get(idx);
            int pe = data.get(pidx);
            data.set(idx,pe);
            data.set(pidx,ie);
            
            upheapify(pidx);
        }
    }
    
    public void swap(int i,int j){
        int ie = data.get(i);
        int je = data.get(j);
        data.set(i,je);
        data.set(j,ie);
    }

    public int remove() {
      // write your code here
      if(data.size() == 0){
          System.out.println("Underflow");
          return -1;
      }
      
      swap(0,data.size()-1);
      int ans = data.remove(data.size()-1);
      downheapify(0);
      return ans;
    }
    
    public void downheapify(int idx){
        int mi = idx;
        int li = 2*idx+1;
        int ri = 2*idx+2;
        if(li<data.size() && data.get(li) < data.get(mi)){
            mi = li;
        }
        
        if(ri<data.size() && data.get(ri) < data.get(mi)){
            mi = ri;
        }
        
        if(mi == idx){
            
        }else{
            swap(idx,mi);
            downheapify(mi);
        }
    }
    
    public int peek() {
      // write your code here
      if(data.size() == 0){
          System.out.println("Underflow");
          return -1;
      }
      return data.get(0);
    }

    public int size() {
      // write your code here
      return data.size();
    }
  }

  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    PriorityQueue qu = new PriorityQueue();

    String str = br.readLine();
    while (str.equals("quit") == false) {
      if (str.startsWith("add")) {
        int val = Integer.parseInt(str.split(" ")[1]);
        qu.add(val);
      } else if (str.startsWith("remove")) {
        int val = qu.remove();
        if (val != -1) {
          System.out.println(val);
        }
      } else if (str.startsWith("peek")) {
        int val = qu.peek();
        if (val != -1) {
          System.out.println(val);
        }
      } else if (str.startsWith("size")) {
        System.out.println(qu.size());
      }
      str = br.readLine();
    }
  }
}