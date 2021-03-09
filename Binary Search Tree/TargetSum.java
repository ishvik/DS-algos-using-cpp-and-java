import java.io.*;
import java.util.*;

public class TargetSum {
  public static class Node {
    int data;
    Node left;
    Node right;

    Node(int data, Node left, Node right) {
      this.data = data;
      this.left = left;
      this.right = right;
    }
  }

  public static class Pair {
    Node node;
    int state;

    Pair(Node node, int state) {
      this.node = node;
      this.state = state;
    }
  }

  public static Node construct(Integer[] arr) {
    Node root = new Node(arr[0], null, null);
    Pair rtp = new Pair(root, 1);

    Stack<Pair> st = new Stack<>();
    st.push(rtp);

    int idx = 0;
    while (st.size() > 0) {
      Pair top = st.peek();
      if (top.state == 1) {
        idx++;
        if (arr[idx] != null) {
          top.node.left = new Node(arr[idx], null, null);
          Pair lp = new Pair(top.node.left, 1);
          st.push(lp);
        } else {
          top.node.left = null;
        }

        top.state++;
      } else if (top.state == 2) {
        idx++;
        if (arr[idx] != null) {
          top.node.right = new Node(arr[idx], null, null);
          Pair rp = new Pair(top.node.right, 1);
          st.push(rp);
        } else {
          top.node.right = null;
        }

        top.state++;
      } else {
        st.pop();
      }
    }

    return root;
  }

  public static void display(Node node) {
    if (node == null) {
      return;
    }

    String str = "";
    str += node.left == null ? "." : node.left.data + "";
    str += " <- " + node.data + " -> ";
    str += node.right == null ? "." : node.right.data + "";
    System.out.println(str);

    display(node.left);
    display(node.right);
  }

  public static void targetsum(Node node,int tar, Node ar){
      if(node == null){
          return;
      }
      targetsum(node.left,tar,ar);
      int x = node.data;
      int xd = tar-x;
      if(xd > x){
          boolean flag = find(ar,xd);
          if(flag == true){
              System.out.println(x+" "+xd);
          }
      }
      targetsum(node.right,tar,ar);
  }
  
  public static void addlist(Node node,ArrayList<Integer> list){
      if(node == null){
          return;
      }
      addlist(node.left,list);
      list.add(node.data);
      addlist(node.right,list);
  }
   public static boolean find(Node node,int key){
       if(node == null){
           return false;
       }
       if(key < node.data){
           return find(node.left,key);
       }else if(key > node.data){
           return find(node.right,key);
       }else{
           return true;
       }
   }
  
  
  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int n = Integer.parseInt(br.readLine());
    Integer[] arr = new Integer[n];
    String[] values = br.readLine().split(" ");
    for (int i = 0; i < n; i++) {
      if (values[i].equals("n") == false) {
        arr[i] = Integer.parseInt(values[i]);
      } else {
        arr[i] = null;
      }
    }

    int data = Integer.parseInt(br.readLine());

    Node root = construct(arr);
    // write your code here
    targetsum(root,data,root);
    
    ArrayList<Integer> list = new ArrayList<>();
    // addlist(root,list);
    // int si = 0;
    // int li = list.size()-1;
    // while(si<li){
    //     int s = list.get(si);
    //     int e = list.get(li);
    //     if(s+e < data){
    //         si++;
    //     }else if(s+e > data){
    //         li--;
    //     }else{
    //         System.out.println(s+" "+e);
    //         si++;
    //         li++;
    //     }
    // }
  }

}