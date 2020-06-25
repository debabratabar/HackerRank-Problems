package hackerrank;

import java.util.Arrays;
import java.util.Scanner;

public class Leftrotation {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T=sc.nextInt();
        for (int counter=0;counter<T;counter++){
            int N= sc.nextInt();
            int d= sc.nextInt();
            int[] arr= new int[N];
            for (int i =0;i<N;i++){
                arr[i]=sc.nextInt();
            }
            int[] Resultarray= new int[N];
            int position=0;
            for ( int i=0;i<N;i++){
                position= i-d;
                if (position<0){
                    position+=1;
                    Resultarray[N-1+position]=arr[i];

                }
                else{
                    Resultarray[i-d]=arr[i];
                }
            }
            for (int element :Resultarray
            ) {
                System.out.print(element+" ");

            }
        }
    } 
    }
