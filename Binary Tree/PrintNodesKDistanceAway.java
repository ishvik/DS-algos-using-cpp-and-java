import java.io.*;
import java.util.*;

public class PrintNodesKDistanceAway {
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
    
  public static void printkleveldown(Node node,int k){
      if(node == null){
          return;
      }
      if(k == 0){
          System.out.println(node.data);
      }
      
      printkleveldown(node.left,k-1);
      printkleveldown(node.right,k-1);
  }  
  
  public static ArrayList<Node> nodetorootpath(Node node,int data){
      if(node == null){
          return new ArrayList<>();
      }
      if(node.data == data){
          ArrayList<Node> t = new ArrayList<>();
          t.add(node);
          return t;
      }
      
      ArrayList<Node> t1 =nodetorootpath(node.left,data);
      if(t1.size() > 0){
          t1.add(node);
          return t1;
      }
      
      ArrayList<Node> t2 =nodetorootpath(node.right,data);
      if(t2.size() > 0){
          t2.add(node);
          return t2;
      }
      return new ArrayList<>();
  }
  
  public static void printKNodesFar(Node node, int data, int k) {
    // write your code here
    ArrayList<Node> path = nodetorootpath(node,data);
    printkleveldown(path.get(0),k);
    
    for(int i=1;i<path.size();i++){
        Node p = path.get(i);
        Node c = path.get(i-1);
        if(i < k){
            if(c == p.left){
                printkleveldown(p.right,k-i-1);
            }else{
                printkleveldown(p.left,k-i-1);
            }
        }else if(i == k){
            System.out.println(p.data);
        }else{
            break;
        }
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
    int k = Integer.parseInt(br.readLine());

    Node root = construct(arr);
    printKNodesFar(root, data, k);
  }

}