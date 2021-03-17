import java.io.*;
import java.util.*;

public class CommonElement1{

public static void main(String[] args) throws Exception {
    // write your code here
    Scanner scn = new Scanner(System.in);
    int n1 = scn.nextInt();
    int []arr1 = new int[n1];
    for(int i=0;i<arr1.length;i++){
        arr1[i] = scn.nextInt();
    }
    
    int n2 = scn.nextInt();
    int []arr2 = new int[n2];
    for(int i=0;i<arr2.length;i++){
        arr2[i] = scn.nextInt();
    }
    
    HashMap<Integer,Integer> map = new HashMap<>();
    for(int i=0;i<arr1.length;i++){
        int v = arr1[i];
        if(map.containsKey(v)){
            int val = map.get(v);
            int n = val+1;
            map.put(v,n);
        }else{
            map.put(v,1);
        }
    
    }
    
    for(int i=0;i<n2;i++){
        if(map.containsKey(arr2[i])){
            System.out.println(arr2[i]);
            map.remove(arr2[i]);
        }
    }

}
}