#include<stdio.h>
int main()
{
int n ,counter=0;
scanf("%ld",&n);
  int bigArray[n];
  int sumOfELements=0;
for(counter=0;counter<n;counter++){
    scanf("%d",&bigArray[counter]);
}

counter=0;
   while (counter<n){
       sumOfELements+=bigArray[counter];
    //    printf("%d\n",sumOfELements);
       counter++;
       }
       printf("%d",sumOfELements);
   }
