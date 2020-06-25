package hackerrank;

import java.util.Scanner;

public class CountingVally {
    public static void main(String[] args) {
        Scanner sc  = new Scanner(System.in);
        int steps=sc.nextInt();
        char[] steps_array= new char[steps];
        String  s= sc.next();
        int[] checker = new int[steps];
        for (int i=0;i<steps;i++){
            steps_array[i]=s.charAt(i);

        }
        if (steps_array[0]=='U'){
            checker[0]=1;
        }
        else
            checker[0]=-1;
        for (int i=1;i<steps;i++){
            if (steps_array[i]=='U'){
                checker[i]=checker[i-1]+1;
            }
            else
                checker[i]=checker[i-1]-1;
        }
        //System.out.println();
        int NoOfVally=0;
        for (int i=0;i<steps;i++){
            if(checker[i]==0 && checker[i-1]==-1){
                NoOfVally+=1;
            }
        }
        System.out.println(NoOfVally);
    }
}
