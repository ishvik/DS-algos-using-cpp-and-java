import java.io.*;
import java.util.*;

public class PrefixEvaluationpublic{

public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    String exp = br.readLine();

    // code
    Stack<Integer> value = new Stack<>();
    Stack<String> prefix = new Stack<>();
    Stack<String> infix = new Stack<>();
    
    for(int i=0;i<exp.length();i++){
        char ch = exp.charAt(i);
        if(ch == '+' || ch == '-' || ch == '*' || ch == '/'){
            int v2 = value.pop();
            int v1 = value.pop();
            int res = operation(v1,v2,ch);
            value.push(res);
            String pre2 = prefix.pop();
            String pre1 = prefix.pop();
            String respre = ch+pre1+pre2;
            prefix.push(respre);
            String in2 = infix.pop();
            String in1 = infix.pop();
            String inres = "("+in1+ch+in2+")";
            infix.push(inres);
        }else{
            value.push(ch-'0');
            infix.push(ch+"");
            prefix.push(ch+"");
        }
    }
    System.out.println(value.peek());
    System.out.println(infix.peek());
    System.out.println(prefix.peek());
 }
 
 public static int operation(int v1,int v2,char op){
     if(op == '+'){
        return v1+v2;
     }else if(op == '-'){
        return v1-v2; 
     }else if(op == '*'){
        return v1*v2;
     }else{
        return v1/v2;
     }
 }
 
}