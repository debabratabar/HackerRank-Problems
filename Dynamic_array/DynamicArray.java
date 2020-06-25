package hackerrank;

import javafx.scene.transform.Scale;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class DynamicArray {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        long lastanswer=0;
        int N= sc.nextInt();
        int Q= sc.nextInt();
       List<Long>[] seqList= new ArrayList[N];
       for (int i=0;i<N;i++) {
           seqList[i] = new ArrayList<Long>();
       }
        for(int counter=0;counter<Q;counter++){
            int Querry= sc.nextInt();
            if(Querry==1){
                long x=sc.nextInt();
                long  y=sc.nextInt();
                int index = (int )(x^lastanswer)%N;
                seqList[index].add(y);
            }
            else{
                long x=sc.nextInt();
                int   y=sc.nextInt();
                int index =(int) (x^lastanswer)%N;
                lastanswer=seqList[index].get(y);
                System.out.println(lastanswer);

            }
        }

    }
}
