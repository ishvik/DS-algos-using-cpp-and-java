import java.io.*;
import java.util.*;

public class LCS{

public static void main(String[] args) throws Exception {
    // write your code here
    Scanner scn=new Scanner(System.in);
    int n=scn.nextInt();
    int[] arr=new int[n];
    for(int i=0;i<arr.length;i++){
        arr[i]=scn.nextInt();
    }
    HashMap<Integer,Boolean> map=new HashMap<>();
    for(int val:arr){
        map.put(val,true);
    }
    for(int val:arr){
        if(map.containsKey(val-1)){
            map.put(val,false);
        }
        
    }
    int ml=0;
    int msp=0;
    for(int val:arr){
        if(map.get(val)==true){
            int ti=1;
            
            while(map.containsKey(val+ti)){
                ti++;
            }
            if(ti>ml){
                ml=ti;
                msp=val;
            }
        }
    }
    for(int i=0;i<ml;i++){
        System.out.println(msp+i);
    }
    
    
 }

}