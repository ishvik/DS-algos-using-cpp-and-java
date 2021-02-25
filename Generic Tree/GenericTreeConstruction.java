import java.util.*;

public class GenericTreeConstruction{
    
    public static class Node{
        int data;
        ArrayList<Node> children = new ArrayList<>();
    }
    
    public static class GenericTree{
        Node root;
        
        void construct(int []arr){
            Stack<Node> st = new Stack<>();
            for(int i=0;i<arr.length;i++){
                if(arr[i] == -1){
                    st.pop();
                }else{
                    Node n = new Node();
                    n.data = arr[i];
                    
                    if(st.size() > 0){
                        st.peek().children.add(n);
                        st.push(n);
                    }else{
                        this.root = n;
                        st.push(n);
                    }
                }
            }
        }
        
        void displaydemo(Node node){
            String str = node.data+" -> ";
            for(Node child : node.children){
                str += child.data+" , ";
            }
            System.out.println(str);
            
            for(Node child:node.children){
                displaydemo(child);
            }
        }
        
        void display(){
            displaydemo(this.root);
        }
    }
    
    public static void main(String[] args){
        int[] arr = {10,12,-1,14,18,-1,20,22,-1,24,-1,26,-1,-1,-1,16,28,-1,-1,-1};
        
        GenericTree gt = new GenericTree();
        gt.construct(arr);
        gt.display();
    }
    
}