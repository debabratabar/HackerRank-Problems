#include<stdio.h>
int main(int argc, char const *argv[])
{


int n,i=1, counter,counter1,counter2=0,number,start=0;
    scanf("%d",&n);
    number=n;
    //printf("%d",n*2-1);
    for(counter=0;counter <n*2-1;counter++){
        printf("%d ",n);
    }

    printf("\n");
        for(counter=1;counter<=((2*n-4)/2)+1;counter++){
              

              for(counter1=0;counter1<counter;counter1++){
                  printf("%d ",number);
                  number--;
              }

              for(counter1=1;counter1<=(n*2-1)-(2*counter);counter1++){
                  printf("%d ",number);
              }

              for(counter2=(n-counter)*2;counter2<((n-counter)*2)+counter;counter2++){
                  //printf("%d",counter2);
                  printf("%d ",++number);
                  
              }
              
              number=n;
              printf("\n");
                    
        }
        for(counter=(2*n-4)/2;counter>=1;counter--){
              

              for(counter1=0;counter1<counter;counter1++){
                  printf("%d ",number);
                  number--;
              }

              for(counter1=1;counter1<=(n*2-1)-(2*counter);counter1++){
                  printf("%d ",number);
              }
              for(counter2=(n-counter)*2;counter2<((n-counter)*2)+counter;counter2++){
                  printf("%d ",++number);
                  
              }
              number =n;
              printf("\n");
                    
        }

    for(counter=0;counter <n*2-1;counter++){
        printf("%d ",n);
    } 
    return 0;
}
