package hackerrank;

import java.util.Scanner;

public class JumpingOnClouds {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N= sc.nextInt();
        int[] clouds_nature= new int[N];
        for (int i =0;i<N;i++){
            clouds_nature[i]=sc.nextInt();
        }
        int steps=0;
        int actual_index=0;
        int destination=0;
        while(destination!=N-1){
            if(destination+2 < N &&clouds_nature[destination+2]==0){
                actual_index+=2;
                steps+=1;
            }
            else if(destination+1< N && clouds_nature[destination+1]==0){
                actual_index+=1;
                steps+=1;

            }

            destination=actual_index;
        }
        System.out.println(steps);
    }
}
