import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int is = 0;
        int os = 0;
        int st = n;
        for (int i = 1; i <= n; i++) {
           for(int j=1;j<=os;j++){
               System.out.print("	");
           }
           for(int j=1;j<=st;j++){
               if(i>1&&i<=n/2&&j>1&&j<st){
                   System.out.print("	");
               }else{
               System.out.print("*	");
           }
           }
           if(i<=n/2){
               os++;
               st-=2;
           }else{
               os--;
               st+=2;
           }
           System.out.println();
           


        }

    }
}import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int is = 0;
        int os = 0;
        int st = n;
        for (int i = 1; i <= n; i++) {
           for(int j=1;j<=os;j++){
               System.out.print("	");
           }
           for(int j=1;j<=st;j++){
               if(i>1&&i<=n/2&&j>1&&j<st){
                   System.out.print("	");
               }else{
               System.out.print("*	");
           }
           }
           if(i<=n/2){
               os++;
               st-=2;
           }else{
               os--;
               st+=2;
           }
           System.out.println();
           


        }

    }
}
