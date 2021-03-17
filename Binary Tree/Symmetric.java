import java.util.*;

public class Symmetric{
    
    public static class Node{
        int data;
        Node left;
        Node right;
    }
    
    public static class Pair{
        Node node;
        int state;
    }
    
    public static Node construct(int[] arr){
        Stack<Pair> st = new Stack<>();
        
        Pair temp = new Pair();
        Node root = new Node();
        root.data = arr[0];
        temp.node = root;
        temp.state = 1;
        st.push(temp);
        for(int i=1;i<arr.length;i++){
            Pair p = st.peek();
            if(p.state == 1){
                if(arr[i] != -1){
                    Node templeft = new Node();
                    templeft.data = arr[i];
                    p.node.left = templeft;
                    
                    Pair pairleft = new Pair();
                    pairleft.node = templeft;
                    pairleft.state = 1;
                    st.push(pairleft);
                }else{
                    p.node.left = null;
                }
                p.state++;
            }else if(p.state == 2){
                if(arr[i] != -1){
                    Node tempright = new Node();
                    tempright.data = arr[i];
                    p.node.right = tempright;
                    
                    Pair pairright = new Pair();
                    pairright.node = tempright;
                    pairright.state = 1;
                    st.push(pairright);
                }else{
                    p.node.right = null;
                }
                p.state++;
            }else{
                st.pop();
                i--;
            }
        }
        return root;
    }
    
    public static boolean areMirror(Node a, Node b)  
    { 
        if (a == null && b == null) 
            return true; 
  
        if (a == null || b == null)  
            return false; 

        return a.data == b.data && areMirror(a.left, b.right) && areMirror(a.right, b.left); 
    }

    public static boolean isSymmetric(Node node){
        return areMirror(node,node);
    }

    public static void main(String[] args){
        int []arr = {1,2,4,-1,-1,5,-1,-1,3,6,-1,-1,7,-1,-1};
        Node n = construct(arr);
        System.out.println(isSymmetric(n));
    }
    
}