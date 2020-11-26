import java.io.*;
import java.util.*;

public class PostfixEvaluationConversion{
  

public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    String exp = br.readLine();

    // code
    Stack<Integer> value = new Stack<>(); 
    Stack<String> infix = new Stack<>();
    Stack<String> postfix = new Stack<>();
    
    for(int i=exp.length()-1;i>=0;i--){
        char ch = exp.charAt(i);
        if(ch == '+' || ch == '-' || ch == '*' || ch == '/'){
            int v1 = value.pop();
            int v2 = value.pop();
            int res = operation(v1,v2,ch);
            value.push(res);
            String in1 = infix.pop();
            String in2 = infix.pop();
            String inres = "("+in1+ch+in2+")";
            infix.push(inres);
            String pos1 = postfix.pop();
            String pos2 = postfix.pop();
            String postfixres = pos1+pos2+ch;
            postfix.push(postfixres);
        }else{
            value.push(ch-'0');
            infix.push(ch+"");
            postfix.push(ch+"");
        }
    }
    System.out.println(value.peek());
    System.out.println(infix.peek());
    System.out.println(postfix.peek());
 }
 
 public static int operation(int v1, int v2, char op){
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