import java.io.*;
import java.util.*;

public class HighFreq {

    public static void main(String[] args) throws Exception {
        // write your code here
        
        Scanner scn = new Scanner(System.in);
        String str = scn.nextLine();
        int mf = 0;
        char m = ' ';
        HashMap<Character,Integer> map = new HashMap<>();
        for(int i=0;i<str.length();i++){
            char ch = str.charAt(i);
            if(map.containsKey(ch)){
                int val = map.get(ch);
                int n = val+1;
                map.put(ch,n);
            }else{
                map.put(ch,1);
            }
            
            if(map.get(ch)>mf){
                mf = map.get(ch);
                m = ch;
            }
        }
        
        
        
        System.out.println(m);
    }

}