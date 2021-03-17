import java.util.*;

public class KthSmallest{

    public static void main(String[] args){
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int []arr = new int[n];
        for(int i=0;i<arr.length;i++){
            arr[i] = scn.nextInt();
        }
        int k = scn.nextInt();
        PriorityQueue<Integer> pq = new PriorityQueue<>(Collections.reverseOrder());
        for(int i=0;i<arr.length;i++){
            if(i<k){
                pq.add(arr[i]);
            }else{
                if(arr[i]<pq.peek()){
                    pq.remove();
                    pq.add(arr[i]);
                }
            }
        }

        LinkedList<Integer> queue = new LinkedList<>();
        while(pq.size() != 0){
            queue.addFirst(pq.remove());
        }
        System.out.println(queue);

    }

}