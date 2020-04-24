#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int counter,counter1,greater1=0,greater2=0,greater3=0;
  int result1=0, result2=0, result3=0;
  for(counter=1;counter<=n;counter++){
      for(counter1=counter+1;counter1<=n;counter1++){
           result1=counter&counter1;
           result2=counter|counter1;
           result3=counter^counter1;
          //  printf("%d\n%d\n%d\n",result1,result2,result3);
           if(result1>greater1 && result1 < k)
           greater1 =result1;
           if(result2>greater2 && result2 < k)
           greater2 =result2;
           if(result3>greater3 && result3 < k)
           greater3 =result3;

            //printf("%d\n%d\n%d\n",greater1,greater2,greater3);
      }
  }

  printf("%d\n%d\n%d\n",greater1,greater2,greater3);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
